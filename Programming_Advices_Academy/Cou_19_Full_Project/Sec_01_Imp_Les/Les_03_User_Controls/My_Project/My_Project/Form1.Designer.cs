namespace My_Project
{
    partial class Form1
    {
        /// <summary>
        ///  Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///  Clean up any resources being used.
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
        ///  Required method for Designer support - do not modify
        ///  the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            ctrlSimpleCalc1 = new ctrlSimpleCalc();
            ctrlSimpleCalc2 = new ctrlSimpleCalc();
            ctrlSimpleCalc3 = new ctrlSimpleCalc();
            SuspendLayout();
            // 
            // ctrlSimpleCalc1
            // 
            ctrlSimpleCalc1.Font = new Font("Segoe UI", 12F, FontStyle.Regular, GraphicsUnit.Point, 0);
            ctrlSimpleCalc1.Location = new Point(13, 13);
            ctrlSimpleCalc1.Margin = new Padding(4);
            ctrlSimpleCalc1.Name = "ctrlSimpleCalc1";
            ctrlSimpleCalc1.Size = new Size(278, 333);
            ctrlSimpleCalc1.TabIndex = 0;
            // 
            // ctrlSimpleCalc2
            // 
            ctrlSimpleCalc2.Font = new Font("Segoe UI", 12F, FontStyle.Regular, GraphicsUnit.Point, 0);
            ctrlSimpleCalc2.Location = new Point(312, 13);
            ctrlSimpleCalc2.Margin = new Padding(4);
            ctrlSimpleCalc2.Name = "ctrlSimpleCalc2";
            ctrlSimpleCalc2.Size = new Size(278, 333);
            ctrlSimpleCalc2.TabIndex = 1;
            // 
            // ctrlSimpleCalc3
            // 
            ctrlSimpleCalc3.Font = new Font("Segoe UI", 12F, FontStyle.Regular, GraphicsUnit.Point, 0);
            ctrlSimpleCalc3.Location = new Point(608, 13);
            ctrlSimpleCalc3.Margin = new Padding(4);
            ctrlSimpleCalc3.Name = "ctrlSimpleCalc3";
            ctrlSimpleCalc3.Size = new Size(278, 333);
            ctrlSimpleCalc3.TabIndex = 2;
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(899, 450);
            Controls.Add(ctrlSimpleCalc3);
            Controls.Add(ctrlSimpleCalc2);
            Controls.Add(ctrlSimpleCalc1);
            Name = "Form1";
            Text = "Form1";
            ResumeLayout(false);
        }

        #endregion

        private ctrlSimpleCalc ctrlSimpleCalc1;
        private ctrlSimpleCalc ctrlSimpleCalc2;
        private ctrlSimpleCalc ctrlSimpleCalc3;
    }
}
