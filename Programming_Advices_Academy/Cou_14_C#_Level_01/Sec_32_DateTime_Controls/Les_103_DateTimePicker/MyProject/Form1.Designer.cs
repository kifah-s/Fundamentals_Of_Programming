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
            this.dateTimePicker1 = new System.Windows.Forms.DateTimePicker();
            this.btnShortDateString = new System.Windows.Forms.Button();
            this.btnLongDateString = new System.Windows.Forms.Button();
            this.label1 = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // dateTimePicker1
            // 
            this.dateTimePicker1.Location = new System.Drawing.Point(236, 44);
            this.dateTimePicker1.Name = "dateTimePicker1";
            this.dateTimePicker1.Size = new System.Drawing.Size(295, 20);
            this.dateTimePicker1.TabIndex = 0;
            this.dateTimePicker1.ValueChanged += new System.EventHandler(this.dateTimePicker1_ValueChanged);
            // 
            // btnShortDateString
            // 
            this.btnShortDateString.Location = new System.Drawing.Point(236, 83);
            this.btnShortDateString.Name = "btnShortDateString";
            this.btnShortDateString.Size = new System.Drawing.Size(125, 32);
            this.btnShortDateString.TabIndex = 1;
            this.btnShortDateString.Text = "Short Date String";
            this.btnShortDateString.UseVisualStyleBackColor = true;
            this.btnShortDateString.Click += new System.EventHandler(this.btnShortDateString_Click);
            // 
            // btnLongDateString
            // 
            this.btnLongDateString.Location = new System.Drawing.Point(406, 83);
            this.btnLongDateString.Name = "btnLongDateString";
            this.btnLongDateString.Size = new System.Drawing.Size(125, 32);
            this.btnLongDateString.TabIndex = 2;
            this.btnLongDateString.Text = "LongDateString";
            this.btnLongDateString.UseVisualStyleBackColor = true;
            this.btnLongDateString.Click += new System.EventHandler(this.btnLongDateString_Click);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(356, 161);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(35, 13);
            this.label1.TabIndex = 3;
            this.label1.Text = "label1";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.btnLongDateString);
            this.Controls.Add(this.btnShortDateString);
            this.Controls.Add(this.dateTimePicker1);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.DateTimePicker dateTimePicker1;
        private System.Windows.Forms.Button btnShortDateString;
        private System.Windows.Forms.Button btnLongDateString;
        private System.Windows.Forms.Label label1;
    }
}

