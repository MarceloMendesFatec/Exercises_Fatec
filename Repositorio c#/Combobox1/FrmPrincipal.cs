using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Combobox1
{
    public partial class FrmPrincipal : Form
    {
        public FrmPrincipal()
        {
            InitializeComponent();
        }

        private void comboBox4_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void FrmPrincipal_Load(object sender, EventArgs e)
        {

        }

        private void combodropdownlsit_SelectedIndexChanged(object sender, EventArgs e)
        {
            if(combodropdownlist.SelectedIndex != -1)
            {
           
                txtpostitem.Text = combodropdownlist.SelectedIndex.ToString();
                txttotal.Text = combodropdownlist.Items.Count.ToString();
                txttextosel.Text = combodropdownlist.SelectedItem.ToString();

            }

        }

        private void btnlimparpalavra_Click(object sender, EventArgs e)
        {
            txtpalavra.Clear();
            combodropdownlist.SelectedIndex = -1;
            txtpostitem.Clear();
            txttotal.Clear();
            txttextosel.Clear();
            txtpalavra.Clear();
            txtpalavra.Focus();

        }

        private void btnadd_Click(object sender, EventArgs e)
        {
            combodropdownlist.Items.Add(txtpalavra.Text);
            txtpalavra.Clear();
            txtpalavra.Focus();
        }

        private void btneliminar_Click(object sender, EventArgs e)
        {
            if(combodropdownlist.SelectedIndex == -1)
            {
                MessageBox.Show("Nenhum Item Selecionado", "combo", MessageBoxButtons.OK, MessageBoxIcon.Information);
            }
            else
            {
                combodropdownlist.Items.RemoveAt(combodropdownlist.SelectedIndex);
                txtpostitem.Clear();
                txttextosel.Clear();
                txttotal.Clear();
            }
        }

        private void btnlimparcombo_Click(object sender, EventArgs e)
        {
            combodropdownlist.Items.Clear();
            txtpalavra.Clear();
            txtpostitem.Clear();
            txttextosel.Clear();
            txttotal.Clear();
        }

        private void txtpalavra_KeyPress(object sender, KeyPressEventArgs e)
        {
            if(e.KeyChar == 13)// 13 é enter
            {
                btnadd_Click(sender, e);
            }
        }

        private void czx(object sender, EventArgs e)
        {

        }
    }
}
