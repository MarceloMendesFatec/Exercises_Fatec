using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
//add
using ExemploCRUD.Class;
using MySql.Data.MySqlClient;


namespace ExemploCRUD
{
    public partial class FrmListarCategoria : Form
    {

        int contador, contar;

        public FrmListarCategoria()
        {
            InitializeComponent();
        }

        private void FrmListarCategoria_Load(object sender, EventArgs e)
        {
            Categoria cat = new Categoria();
            string query = "SELECT * FROM categoria";

            DataRowCollection res = cat.listar(query).Rows;

            if (res.Count > 0)//mudança
            {
                try
                {
                    contador = 0;//mudança
                    contar = 1;//mudança
                    //parte comum para anterior e próximo
                    reaproveitar(res);
                }
                catch (Exception ex)
                {
                    throw ex;
                }
            }
        }

        private void btn_anterior_Click(object sender, EventArgs e)
        {
            Categoria cat = new Categoria();
            string query = "SELECT * FROM categoria";

            DataRowCollection res = cat.listar(query).Rows;

            if (contador > 0)//mudança
            {
                try
                {
                    contador--;//mudança
                    contar--;//mudança
                    //parte comum para anterior e próximo
                    reaproveitar(res);
                }
                catch (Exception ex)
                {
                    throw ex;
                }
            }
        }

        private void btn_proximo_Click(object sender, EventArgs e)
        {
            Categoria cat = new Categoria();
            string query = "SELECT * FROM categoria";

            DataRowCollection res = cat.listar(query).Rows;

            if (contador < (res.Count - 1))
            {
                try
                {
                    contador++;
                    contar++;
                    //parte comum para anterior e próximo
                    reaproveitar(res);
                }
                catch (Exception ex)
                {
                    throw ex;
                }
            }
        }

        private void reaproveitar(DataRowCollection res)
        {
            lbl_idmostrar.Text = res[contador]["id"].ToString();
            txt_descricao.Text = res[contador]["descricao"].ToString();
        }
    }
}
