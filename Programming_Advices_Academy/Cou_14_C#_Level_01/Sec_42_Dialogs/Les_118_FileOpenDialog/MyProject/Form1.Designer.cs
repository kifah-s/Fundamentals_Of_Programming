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
            this.textBox1 = new System.Windows.Forms.TextBox();
            this.btnOpenFileDialog = new System.Windows.Forms.Button();
            this.btnOpenFileDialogMultiSelect = new System.Windows.Forms.Button();
            this.openFileDialog1 = new System.Windows.Forms.OpenFileDialog();
            this.SuspendLayout();
            // 
            // textBox1
            // 
            this.textBox1.Font = new System.Drawing.Font("Tahoma", 15.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.textBox1.Location = new System.Drawing.Point(207, 53);
            this.textBox1.Name = "textBox1";
            this.textBox1.Size = new System.Drawing.Size(393, 33);
            this.textBox1.TabIndex = 0;
            this.textBox1.Text = "This is a text";
            // 
            // btnOpenFileDialog
            // 
            this.btnOpenFileDialog.Location = new System.Drawing.Point(207, 121);
            this.btnOpenFileDialog.Name = "btnOpenFileDialog";
            this.btnOpenFileDialog.Size = new System.Drawing.Size(152, 28);
            this.btnOpenFileDialog.TabIndex = 1;
            this.btnOpenFileDialog.Text = "Open file dialog";
            this.btnOpenFileDialog.UseVisualStyleBackColor = true;
            this.btnOpenFileDialog.Click += new System.EventHandler(this.btnOpenFileDialog_Click);
            // 
            // btnOpenFileDialogMultiSelect
            // 
            this.btnOpenFileDialogMultiSelect.Location = new System.Drawing.Point(442, 121);
            this.btnOpenFileDialogMultiSelect.Name = "btnOpenFileDialogMultiSelect";
            this.btnOpenFileDialogMultiSelect.Size = new System.Drawing.Size(158, 28);
            this.btnOpenFileDialogMultiSelect.TabIndex = 2;
            this.btnOpenFileDialogMultiSelect.Text = "Open file dialog Multi Select";
            this.btnOpenFileDialogMultiSelect.UseVisualStyleBackColor = true;
            this.btnOpenFileDialogMultiSelect.Click += new System.EventHandler(this.btnOpenFileDialogMultiSelect_Click);
            // 
            // openFileDialog1
            // 
            this.openFileDialog1.FileName = "openFileDialog1";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.btnOpenFileDialogMultiSelect);
            this.Controls.Add(this.btnOpenFileDialog);
            this.Controls.Add(this.textBox1);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox textBox1;
        private System.Windows.Forms.Button btnOpenFileDialog;
        private System.Windows.Forms.Button btnOpenFileDialogMultiSelect;
        private System.Windows.Forms.OpenFileDialog openFileDialog1;
    }
}

