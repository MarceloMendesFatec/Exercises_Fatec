using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace MARCELO1105
{
    public partial class FrmPrincipal : Form
    {
        public FrmPrincipal()
        {
            InitializeComponent();
        }


        private void salvarToolStripMenuItem_Click(object sender, EventArgs e)
        {

            FrmSalvar frm = new FrmSalvar();
            frm.Show();
        }
    }
}
