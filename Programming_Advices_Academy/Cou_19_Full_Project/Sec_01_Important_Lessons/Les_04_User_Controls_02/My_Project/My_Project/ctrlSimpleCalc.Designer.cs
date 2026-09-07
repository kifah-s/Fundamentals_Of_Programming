namespace My_Project
{
    partial class ctrlSimpleCalc
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

        #region Component Designer generated code

        /// <summary> 
        /// Required method for Designer support - do not modify 
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            textBox1 = new TextBox();
            textBox2 = new TextBox();
            label1 = new Label();
            btnCalculate = new Button();
            lblResult = new Label();
            SuspendLayout();
            // 
            // textBox1
            // 
            textBox1.Location = new Point(20, 17);
            textBox1.Name = "textBox1";
            textBox1.Size = new Size(240, 29);
            textBox1.TabIndex = 0;
            // 
            // textBox2
            // 
            textBox2.Location = new Point(20, 118);
            textBox2.Name = "textBox2";
            textBox2.Size = new Size(240, 29);
            textBox2.TabIndex = 1;
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Font = new Font("Segoe UI", 15.75F, FontStyle.Bold, GraphicsUnit.Point, 0);
            label1.Location = new Point(123, 66);
            label1.Name = "label1";
            label1.Size = new Size(28, 30);
            label1.TabIndex = 2;
            label1.Text = "+";
            // 
            // btnCalculate
            // 
            btnCalculate.Font = new Font("Segoe UI", 15.75F, FontStyle.Bold, GraphicsUnit.Point, 0);
            btnCalculate.Location = new Point(20, 193);
            btnCalculate.Name = "btnCalculate";
            btnCalculate.Size = new Size(240, 43);
            btnCalculate.TabIndex = 3;
            btnCalculate.Text = "Calculate";
            btnCalculate.UseVisualStyleBackColor = true;
            btnCalculate.Click += btnCalculate_Click;
            // 
            // lblResult
            // 
            lblResult.AutoSize = true;
            lblResult.Font = new Font("Segoe UI", 15.75F, FontStyle.Bold, GraphicsUnit.Point, 0);
            lblResult.Location = new Point(100, 271);
            lblResult.Name = "lblResult";
            lblResult.Size = new Size(85, 30);
            lblResult.TabIndex = 4;
            lblResult.Text = "????????";
            // 
            // ctrlSimpleCalc
            // 
            AutoScaleDimensions = new SizeF(9F, 21F);
            AutoScaleMode = AutoScaleMode.Font;
            Controls.Add(lblResult);
            Controls.Add(btnCalculate);
            Controls.Add(label1);
            Controls.Add(textBox2);
            Controls.Add(textBox1);
            Font = new Font("Segoe UI", 12F, FontStyle.Regular, GraphicsUnit.Point, 0);
            Margin = new Padding(4, 4, 4, 4);
            Name = "ctrlSimpleCalc";
            Size = new Size(278, 333);
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private TextBox textBox1;
        private TextBox textBox2;
        private Label label1;
        private Button btnCalculate;
        private Label lblResult;
    }
}
