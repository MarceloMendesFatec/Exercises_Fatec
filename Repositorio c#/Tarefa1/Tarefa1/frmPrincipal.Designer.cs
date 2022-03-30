
namespace Tarefa1
{
    partial class FrmPrincipal
    {
        /// <summary>
        /// Variável de designer necessária.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Limpar os recursos que estão sendo usados.
        /// </summary>
        /// <param name="disposing">true se for necessário descartar os recursos gerenciados; caso contrário, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Código gerado pelo Windows Form Designer

        /// <summary>
        /// Método necessário para suporte ao Designer - não modifique 
        /// o conteúdo deste método com o editor de código.
        /// </summary>
        private void InitializeComponent()
        {
            this.menuPrincipal = new System.Windows.Forms.MenuStrip();
            this.opcConsulta = new System.Windows.Forms.ToolStripMenuItem();
            this.itemConsCLi = new System.Windows.Forms.ToolStripMenuItem();
            this.itemConsProd = new System.Windows.Forms.ToolStripMenuItem();
            this.sairToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.sairDoProgamaToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.menuPrincipal.SuspendLayout();
            this.SuspendLayout();
            // 
            // menuPrincipal
            // 
            this.menuPrincipal.ImageScalingSize = new System.Drawing.Size(20, 20);
            this.menuPrincipal.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.opcConsulta,
            this.sairToolStripMenuItem});
            this.menuPrincipal.Location = new System.Drawing.Point(0, 0);
            this.menuPrincipal.Name = "menuPrincipal";
            this.menuPrincipal.Size = new System.Drawing.Size(800, 28);
            this.menuPrincipal.TabIndex = 0;
            this.menuPrincipal.Text = "menuStrip1";
            // 
            // opcConsulta
            // 
            this.opcConsulta.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.itemConsCLi,
            this.itemConsProd});
            this.opcConsulta.Name = "opcConsulta";
            this.opcConsulta.Size = new System.Drawing.Size(80, 24);
            this.opcConsulta.Text = "Consulta";
            // 
            // itemConsCLi
            // 
            this.itemConsCLi.Name = "itemConsCLi";
            this.itemConsCLi.Size = new System.Drawing.Size(224, 26);
            this.itemConsCLi.Text = "Clientes";
            this.itemConsCLi.Click += new System.EventHandler(this.itemConsCLi_Click);
            // 
            // itemConsProd
            // 
            this.itemConsProd.Name = "itemConsProd";
            this.itemConsProd.Size = new System.Drawing.Size(224, 26);
            this.itemConsProd.Text = "Produtos";
            this.itemConsProd.Click += new System.EventHandler(this.itemConsProd_Click);
            // 
            // sairToolStripMenuItem
            // 
            this.sairToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.sairDoProgamaToolStripMenuItem});
            this.sairToolStripMenuItem.Name = "sairToolStripMenuItem";
            this.sairToolStripMenuItem.Size = new System.Drawing.Size(48, 24);
            this.sairToolStripMenuItem.Text = "Sair";
            // 
            // sairDoProgamaToolStripMenuItem
            // 
            this.sairDoProgamaToolStripMenuItem.Name = "sairDoProgamaToolStripMenuItem";
            this.sairDoProgamaToolStripMenuItem.Size = new System.Drawing.Size(224, 26);
            this.sairDoProgamaToolStripMenuItem.Text = "Sair do Progama";
            this.sairDoProgamaToolStripMenuItem.Click += new System.EventHandler(this.sairDoProgamaToolStripMenuItem_Click);
            // 
            // FrmPrincipal
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.menuPrincipal);
            this.MainMenuStrip = this.menuPrincipal;
            this.Name = "FrmPrincipal";
            this.Text = "Empresa xyz";
            this.Load += new System.EventHandler(this.FrmPrincipal_Load);
            this.menuPrincipal.ResumeLayout(false);
            this.menuPrincipal.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.MenuStrip menuPrincipal;
        private System.Windows.Forms.ToolStripMenuItem opcConsulta;
        private System.Windows.Forms.ToolStripMenuItem itemConsCLi;
        private System.Windows.Forms.ToolStripMenuItem itemConsProd;
        private System.Windows.Forms.ToolStripMenuItem sairToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem sairDoProgamaToolStripMenuItem;
    }
}

