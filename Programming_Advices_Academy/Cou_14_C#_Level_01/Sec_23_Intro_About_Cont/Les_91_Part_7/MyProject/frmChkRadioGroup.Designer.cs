namespace MyProject
{
    partial class frmChkRadioGroup
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
            this.chkReceiveEmail = new System.Windows.Forms.CheckBox();
            this.button1 = new System.Windows.Forms.Button();
            this.rbSmall = new System.Windows.Forms.RadioButton();
            this.rbMedium = new System.Windows.Forms.RadioButton();
            this.rbLarg = new System.Windows.Forms.RadioButton();
            this.button2 = new System.Windows.Forms.Button();
            this.Thick = new System.Windows.Forms.RadioButton();
            this.rbThin = new System.Windows.Forms.RadioButton();
            this.gpSize = new System.Windows.Forms.GroupBox();
            this.gpCrust = new System.Windows.Forms.GroupBox();
            this.gpSize.SuspendLayout();
            this.gpCrust.SuspendLayout();
            this.SuspendLayout();
            // 
            // chkReceiveEmail
            // 
            this.chkReceiveEmail.AutoSize = true;
            this.chkReceiveEmail.Location = new System.Drawing.Point(79, 37);
            this.chkReceiveEmail.Name = "chkReceiveEmail";
            this.chkReceiveEmail.Size = new System.Drawing.Size(171, 17);
            this.chkReceiveEmail.TabIndex = 0;
            this.chkReceiveEmail.Text = "Do you want to reseve email ?";
            this.chkReceiveEmail.UseVisualStyleBackColor = true;
            this.chkReceiveEmail.CheckedChanged += new System.EventHandler(this.checkBox1_CheckedChanged);
            // 
            // button1
            // 
            this.button1.Enabled = false;
            this.button1.Location = new System.Drawing.Point(79, 71);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(109, 31);
            this.button1.TabIndex = 1;
            this.button1.Text = "button1";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // rbSmall
            // 
            this.rbSmall.AutoSize = true;
            this.rbSmall.Location = new System.Drawing.Point(6, 25);
            this.rbSmall.Name = "rbSmall";
            this.rbSmall.Size = new System.Drawing.Size(49, 17);
            this.rbSmall.TabIndex = 2;
            this.rbSmall.TabStop = true;
            this.rbSmall.Text = "Small";
            this.rbSmall.UseVisualStyleBackColor = true;
            // 
            // rbMedium
            // 
            this.rbMedium.AutoSize = true;
            this.rbMedium.Location = new System.Drawing.Point(6, 63);
            this.rbMedium.Name = "rbMedium";
            this.rbMedium.Size = new System.Drawing.Size(61, 17);
            this.rbMedium.TabIndex = 3;
            this.rbMedium.TabStop = true;
            this.rbMedium.Text = "Medium";
            this.rbMedium.UseVisualStyleBackColor = true;
            // 
            // rbLarg
            // 
            this.rbLarg.AutoSize = true;
            this.rbLarg.Location = new System.Drawing.Point(6, 102);
            this.rbLarg.Name = "rbLarg";
            this.rbLarg.Size = new System.Drawing.Size(46, 17);
            this.rbLarg.TabIndex = 4;
            this.rbLarg.TabStop = true;
            this.rbLarg.Text = "Larg";
            this.rbLarg.UseVisualStyleBackColor = true;
            // 
            // button2
            // 
            this.button2.Location = new System.Drawing.Point(6, 134);
            this.button2.Name = "button2";
            this.button2.Size = new System.Drawing.Size(188, 31);
            this.button2.TabIndex = 5;
            this.button2.Text = "button2";
            this.button2.UseVisualStyleBackColor = true;
            this.button2.Click += new System.EventHandler(this.button2_Click);
            // 
            // Thick
            // 
            this.Thick.AutoSize = true;
            this.Thick.Location = new System.Drawing.Point(6, 65);
            this.Thick.Name = "Thick";
            this.Thick.Size = new System.Drawing.Size(49, 17);
            this.Thick.TabIndex = 7;
            this.Thick.TabStop = true;
            this.Thick.Text = "Thick";
            this.Thick.UseVisualStyleBackColor = true;
            // 
            // rbThin
            // 
            this.rbThin.AutoSize = true;
            this.rbThin.Location = new System.Drawing.Point(6, 28);
            this.rbThin.Name = "rbThin";
            this.rbThin.Size = new System.Drawing.Size(45, 17);
            this.rbThin.TabIndex = 6;
            this.rbThin.TabStop = true;
            this.rbThin.Text = "Thin";
            this.rbThin.UseVisualStyleBackColor = true;
            // 
            // gpSize
            // 
            this.gpSize.Controls.Add(this.rbSmall);
            this.gpSize.Controls.Add(this.rbMedium);
            this.gpSize.Controls.Add(this.rbLarg);
            this.gpSize.Controls.Add(this.button2);
            this.gpSize.Location = new System.Drawing.Point(295, 37);
            this.gpSize.Name = "gpSize";
            this.gpSize.Size = new System.Drawing.Size(200, 171);
            this.gpSize.TabIndex = 8;
            this.gpSize.TabStop = false;
            this.gpSize.Text = "Size";
            // 
            // gpCrust
            // 
            this.gpCrust.Controls.Add(this.rbThin);
            this.gpCrust.Controls.Add(this.Thick);
            this.gpCrust.Location = new System.Drawing.Point(555, 37);
            this.gpCrust.Name = "gpCrust";
            this.gpCrust.Size = new System.Drawing.Size(200, 100);
            this.gpCrust.TabIndex = 9;
            this.gpCrust.TabStop = false;
            this.gpCrust.Text = "Crust";
            // 
            // frmChkRadioGroup
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.gpCrust);
            this.Controls.Add(this.gpSize);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.chkReceiveEmail);
            this.Name = "frmChkRadioGroup";
            this.Text = "frmChkRadioGroup";
            this.gpSize.ResumeLayout(false);
            this.gpSize.PerformLayout();
            this.gpCrust.ResumeLayout(false);
            this.gpCrust.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.CheckBox chkReceiveEmail;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.RadioButton rbSmall;
        private System.Windows.Forms.RadioButton rbMedium;
        private System.Windows.Forms.RadioButton rbLarg;
        private System.Windows.Forms.Button button2;
        private System.Windows.Forms.RadioButton Thick;
        private System.Windows.Forms.RadioButton rbThin;
        private System.Windows.Forms.GroupBox gpSize;
        private System.Windows.Forms.GroupBox gpCrust;
    }
}