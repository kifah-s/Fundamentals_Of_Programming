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
            btnViewResult_01 = new Button();
            btnViewResult_02 = new Button();
            btnViewResult_03 = new Button();
            SuspendLayout();
            // 
            // ctrlSimpleCalc1
            // 
            ctrlSimpleCalc1.Font = new Font("Segoe UI", 12F, FontStyle.Regular, GraphicsUnit.Point, 0);
            ctrlSimpleCalc1.Location = new Point(13, 13);
            ctrlSimpleCalc1.Margin = new Padding(4);
            ctrlSimpleCalc1.Name = "ctrlSimpleCalc1";
            ctrlSimpleCalc1.Size = new Size(278, 315);
            ctrlSimpleCalc1.TabIndex = 0;
            // 
            // ctrlSimpleCalc2
            // 
            ctrlSimpleCalc2.Font = new Font("Segoe UI", 12F, FontStyle.Regular, GraphicsUnit.Point, 0);
            ctrlSimpleCalc2.Location = new Point(312, 13);
            ctrlSimpleCalc2.Margin = new Padding(4);
            ctrlSimpleCalc2.Name = "ctrlSimpleCalc2";
            ctrlSimpleCalc2.Size = new Size(278, 315);
            ctrlSimpleCalc2.TabIndex = 1;
            // 
            // ctrlSimpleCalc3
            // 
            ctrlSimpleCalc3.Font = new Font("Segoe UI", 12F, FontStyle.Regular, GraphicsUnit.Point, 0);
            ctrlSimpleCalc3.Location = new Point(608, 13);
            ctrlSimpleCalc3.Margin = new Padding(4);
            ctrlSimpleCalc3.Name = "ctrlSimpleCalc3";
            ctrlSimpleCalc3.Size = new Size(278, 315);
            ctrlSimpleCalc3.TabIndex = 2;
            // 
            // btnViewResult_01
            // 
            btnViewResult_01.Location = new Point(96, 362);
            btnViewResult_01.Name = "btnViewResult_01";
            btnViewResult_01.Size = new Size(113, 42);
            btnViewResult_01.TabIndex = 3;
            btnViewResult_01.Text = "View Result";
            btnViewResult_01.UseVisualStyleBackColor = true;
            btnViewResult_01.Click += btnViewResult_01_Click;
            // 
            // btnViewResult_02
            // 
            btnViewResult_02.Location = new Point(403, 362);
            btnViewResult_02.Name = "btnViewResult_02";
            btnViewResult_02.Size = new Size(113, 42);
            btnViewResult_02.TabIndex = 4;
            btnViewResult_02.Text = "View Result";
            btnViewResult_02.UseVisualStyleBackColor = true;
            btnViewResult_02.Click += btnViewResult_02_Click;
            // 
            // btnViewResult_03
            // 
            btnViewResult_03.Location = new Point(703, 362);
            btnViewResult_03.Name = "btnViewResult_03";
            btnViewResult_03.Size = new Size(113, 42);
            btnViewResult_03.TabIndex = 5;
            btnViewResult_03.Text = "View Result";
            btnViewResult_03.UseVisualStyleBackColor = true;
            btnViewResult_03.Click += btnViewResult_03_Click;
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(899, 450);
            Controls.Add(btnViewResult_03);
            Controls.Add(btnViewResult_02);
            Controls.Add(btnViewResult_01);
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
        private Button btnViewResult_01;
        private Button btnViewResult_02;
        private Button btnViewResult_03;
    }
}
