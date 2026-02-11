namespace MyProject
{
    partial class Form2
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
            this.btnShowForm1 = new System.Windows.Forms.Button();
            this.btnShowForm1asDialog = new System.Windows.Forms.Button();
            this.btnMessageBoxForm = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // btnShowForm1
            // 
            this.btnShowForm1.Location = new System.Drawing.Point(21, 12);
            this.btnShowForm1.Name = "btnShowForm1";
            this.btnShowForm1.Size = new System.Drawing.Size(214, 76);
            this.btnShowForm1.TabIndex = 0;
            this.btnShowForm1.Text = "Show Form 1";
            this.btnShowForm1.UseVisualStyleBackColor = true;
            this.btnShowForm1.Click += new System.EventHandler(this.btnShowForm1_Click);
            // 
            // btnShowForm1asDialog
            // 
            this.btnShowForm1asDialog.Location = new System.Drawing.Point(21, 104);
            this.btnShowForm1asDialog.Name = "btnShowForm1asDialog";
            this.btnShowForm1asDialog.Size = new System.Drawing.Size(214, 76);
            this.btnShowForm1asDialog.TabIndex = 1;
            this.btnShowForm1asDialog.Text = "Show Form 1 as Dialog";
            this.btnShowForm1asDialog.UseVisualStyleBackColor = true;
            this.btnShowForm1asDialog.Click += new System.EventHandler(this.btnShowForm1asDialog_Click);
            // 
            // btnMessageBoxForm
            // 
            this.btnMessageBoxForm.Location = new System.Drawing.Point(574, 12);
            this.btnMessageBoxForm.Name = "btnMessageBoxForm";
            this.btnMessageBoxForm.Size = new System.Drawing.Size(214, 76);
            this.btnMessageBoxForm.TabIndex = 2;
            this.btnMessageBoxForm.Text = "Message Box Form";
            this.btnMessageBoxForm.UseVisualStyleBackColor = true;
            this.btnMessageBoxForm.Click += new System.EventHandler(this.btnMessageBoxForm_Click);
            // 
            // Form2
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.btnMessageBoxForm);
            this.Controls.Add(this.btnShowForm1asDialog);
            this.Controls.Add(this.btnShowForm1);
            this.Name = "Form2";
            this.Text = "Main Form";
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Button btnShowForm1;
        private System.Windows.Forms.Button btnShowForm1asDialog;
        private System.Windows.Forms.Button btnMessageBoxForm;
    }
}