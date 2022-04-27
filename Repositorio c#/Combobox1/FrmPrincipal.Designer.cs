
namespace Combobox1
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
            this.lbltextosel = new System.Windows.Forms.Label();
            this.lblpalavra = new System.Windows.Forms.Label();
            this.lbldropdownlist = new System.Windows.Forms.Label();
            this.lbltotal = new System.Windows.Forms.Label();
            this.LblpostItem = new System.Windows.Forms.Label();
            this.btnadd = new System.Windows.Forms.Button();
            this.btneliminar = new System.Windows.Forms.Button();
            this.btnlimparcombo = new System.Windows.Forms.Button();
            this.btnlimparpalavra = new System.Windows.Forms.Button();
            this.btnsair = new System.Windows.Forms.Button();
            this.combodropdownlist = new System.Windows.Forms.ComboBox();
            this.txtpalavra = new System.Windows.Forms.TextBox();
            this.txtpostitem = new System.Windows.Forms.TextBox();
            this.txttotal = new System.Windows.Forms.TextBox();
            this.txttextosel = new System.Windows.Forms.TextBox();
            this.SuspendLayout();
            // 
            // lbltextosel
            // 
            this.lbltextosel.AutoSize = true;
            this.lbltextosel.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lbltextosel.Location = new System.Drawing.Point(37, 253);
            this.lbltextosel.Name = "lbltextosel";
            this.lbltextosel.Size = new System.Drawing.Size(131, 16);
            this.lbltextosel.TabIndex = 2;
            this.lbltextosel.Text = "texto selecionado";
            // 
            // lblpalavra
            // 
            this.lblpalavra.AccessibleDescription = "";
            this.lblpalavra.AutoSize = true;
            this.lblpalavra.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lblpalavra.Location = new System.Drawing.Point(54, 92);
            this.lblpalavra.Name = "lblpalavra";
            this.lblpalavra.Size = new System.Drawing.Size(114, 13);
            this.lblpalavra.TabIndex = 3;
            this.lblpalavra.Text = "Digite uma Palavra";
            // 
            // lbldropdownlist
            // 
            this.lbldropdownlist.AutoSize = true;
            this.lbldropdownlist.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lbldropdownlist.Location = new System.Drawing.Point(63, 130);
            this.lbldropdownlist.Name = "lbldropdownlist";
            this.lbldropdownlist.Size = new System.Drawing.Size(105, 13);
            this.lbldropdownlist.TabIndex = 4;
            this.lbldropdownlist.Text = "Estilo Dropboxlist";
            // 
            // lbltotal
            // 
            this.lbltotal.AutoSize = true;
            this.lbltotal.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lbltotal.Location = new System.Drawing.Point(63, 208);
            this.lbltotal.Name = "lbltotal";
            this.lbltotal.Size = new System.Drawing.Size(85, 13);
            this.lbltotal.TabIndex = 5;
            this.lbltotal.Text = "Total de itens";
            // 
            // LblpostItem
            // 
            this.LblpostItem.AutoSize = true;
            this.LblpostItem.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.LblpostItem.Location = new System.Drawing.Point(63, 166);
            this.LblpostItem.Name = "LblpostItem";
            this.LblpostItem.Size = new System.Drawing.Size(97, 13);
            this.LblpostItem.TabIndex = 6;
            this.LblpostItem.Text = "Posição na lista";
            // 
            // btnadd
            // 
            this.btnadd.Location = new System.Drawing.Point(315, 87);
            this.btnadd.Name = "btnadd";
            this.btnadd.Size = new System.Drawing.Size(144, 23);
            this.btnadd.TabIndex = 7;
            this.btnadd.Text = "Add no Combo";
            this.btnadd.UseVisualStyleBackColor = true;
            this.btnadd.Click += new System.EventHandler(this.btnadd_Click);
            // 
            // btneliminar
            // 
            this.btneliminar.Location = new System.Drawing.Point(313, 122);
            this.btneliminar.Name = "btneliminar";
            this.btneliminar.Size = new System.Drawing.Size(144, 23);
            this.btneliminar.TabIndex = 8;
            this.btneliminar.Text = "Eliminar item ";
            this.btneliminar.UseVisualStyleBackColor = true;
            this.btneliminar.Click += new System.EventHandler(this.btneliminar_Click);
            // 
            // btnlimparcombo
            // 
            this.btnlimparcombo.Location = new System.Drawing.Point(313, 166);
            this.btnlimparcombo.Name = "btnlimparcombo";
            this.btnlimparcombo.Size = new System.Drawing.Size(144, 23);
            this.btnlimparcombo.TabIndex = 9;
            this.btnlimparcombo.Text = "Limpar Combo";
            this.btnlimparcombo.UseVisualStyleBackColor = true;
            this.btnlimparcombo.Click += new System.EventHandler(this.btnlimparcombo_Click);
            // 
            // btnlimparpalavra
            // 
            this.btnlimparpalavra.BackColor = System.Drawing.SystemColors.ButtonFace;
            this.btnlimparpalavra.Location = new System.Drawing.Point(313, 208);
            this.btnlimparpalavra.Name = "btnlimparpalavra";
            this.btnlimparpalavra.Size = new System.Drawing.Size(144, 23);
            this.btnlimparpalavra.TabIndex = 10;
            this.btnlimparpalavra.Text = "limpar campo palavra";
            this.btnlimparpalavra.UseVisualStyleBackColor = false;
            this.btnlimparpalavra.Click += new System.EventHandler(this.btnlimparpalavra_Click);
            // 
            // btnsair
            // 
            this.btnsair.Location = new System.Drawing.Point(313, 246);
            this.btnsair.Name = "btnsair";
            this.btnsair.Size = new System.Drawing.Size(144, 23);
            this.btnsair.TabIndex = 11;
            this.btnsair.Text = "SAIR";
            this.btnsair.UseVisualStyleBackColor = true;
            // 
            // combodropdownlist
            // 
            this.combodropdownlist.FormattingEnabled = true;
            this.combodropdownlist.Location = new System.Drawing.Point(174, 122);
            this.combodropdownlist.Name = "combodropdownlist";
            this.combodropdownlist.Size = new System.Drawing.Size(121, 21);
            this.combodropdownlist.TabIndex = 13;
            this.combodropdownlist.SelectedIndexChanged += new System.EventHandler(this.combodropdownlsit_SelectedIndexChanged);
            // 
            // txtpalavra
            // 
            this.txtpalavra.Location = new System.Drawing.Point(174, 87);
            this.txtpalavra.Name = "txtpalavra";
            this.txtpalavra.Size = new System.Drawing.Size(121, 20);
            this.txtpalavra.TabIndex = 14;
            this.txtpalavra.TextChanged += new System.EventHandler(this.czx);
            this.txtpalavra.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.txtpalavra_KeyPress);
            // 
            // txtpostitem
            // 
            this.txtpostitem.Enabled = false;
            this.txtpostitem.Location = new System.Drawing.Point(174, 168);
            this.txtpostitem.Name = "txtpostitem";
            this.txtpostitem.Size = new System.Drawing.Size(121, 20);
            this.txtpostitem.TabIndex = 15;
            // 
            // txttotal
            // 
            this.txttotal.Enabled = false;
            this.txttotal.Location = new System.Drawing.Point(174, 200);
            this.txttotal.Name = "txttotal";
            this.txttotal.Size = new System.Drawing.Size(121, 20);
            this.txttotal.TabIndex = 16;
            // 
            // txttextosel
            // 
            this.txttextosel.Location = new System.Drawing.Point(174, 249);
            this.txttextosel.Name = "txttextosel";
            this.txttextosel.Size = new System.Drawing.Size(121, 20);
            this.txttextosel.TabIndex = 17;
            // 
            // FrmPrincipal
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(482, 313);
            this.Controls.Add(this.txttextosel);
            this.Controls.Add(this.txttotal);
            this.Controls.Add(this.txtpostitem);
            this.Controls.Add(this.txtpalavra);
            this.Controls.Add(this.combodropdownlist);
            this.Controls.Add(this.btnsair);
            this.Controls.Add(this.btnlimparpalavra);
            this.Controls.Add(this.btnlimparcombo);
            this.Controls.Add(this.btneliminar);
            this.Controls.Add(this.btnadd);
            this.Controls.Add(this.LblpostItem);
            this.Controls.Add(this.lbltotal);
            this.Controls.Add(this.lbldropdownlist);
            this.Controls.Add(this.lblpalavra);
            this.Controls.Add(this.lbltextosel);
            this.Name = "FrmPrincipal";
            this.Text = "FrmPrincipal";
            this.Load += new System.EventHandler(this.FrmPrincipal_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion
        private System.Windows.Forms.Label lbltextosel;
        private System.Windows.Forms.Label lblpalavra;
        private System.Windows.Forms.Label lbldropdownlist;
        private System.Windows.Forms.Label lbltotal;
        private System.Windows.Forms.Label LblpostItem;
        private System.Windows.Forms.Button btnadd;
        private System.Windows.Forms.Button btneliminar;
        private System.Windows.Forms.Button btnlimparcombo;
        private System.Windows.Forms.Button btnlimparpalavra;
        private System.Windows.Forms.Button btnsair;
        private System.Windows.Forms.ComboBox combodropdownlist;
        private System.Windows.Forms.TextBox txtpalavra;
        private System.Windows.Forms.TextBox txtpostitem;
        private System.Windows.Forms.TextBox txttotal;
        private System.Windows.Forms.TextBox txttextosel;
    }
}

