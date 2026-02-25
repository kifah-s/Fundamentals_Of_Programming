namespace MyProject
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.btnFolderBrowsingDialog = new System.Windows.Forms.Button();
            this.folderBrowserDialog1 = new System.Windows.Forms.FolderBrowserDialog();
            this.SuspendLayout();
            // 
            // btnFolderBrowsingDialog
            // 
            this.btnFolderBrowsingDialog.Location = new System.Drawing.Point(249, 184);
            this.btnFolderBrowsingDialog.Name = "btnFolderBrowsingDialog";
            this.btnFolderBrowsingDialog.Size = new System.Drawing.Size(287, 66);
            this.btnFolderBrowsingDialog.TabIndex = 0;
            this.btnFolderBrowsingDialog.Text = "Folder Browsing Dialog";
            this.btnFolderBrowsingDialog.UseVisualStyleBackColor = true;
            this.btnFolderBrowsingDialog.Click += new System.EventHandler(this.btnFolderBrowsingDialog_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.btnFolderBrowsingDialog);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Button btnFolderBrowsingDialog;
        private System.Windows.Forms.FolderBrowserDialog folderBrowserDialog1;
    }
}

