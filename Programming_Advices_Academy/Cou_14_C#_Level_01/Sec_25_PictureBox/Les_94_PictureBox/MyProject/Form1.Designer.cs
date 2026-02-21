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
            this.pictureBox1 = new System.Windows.Forms.PictureBox();
            this.btnSwitchingBetweenImages = new System.Windows.Forms.Button();
            this.btnImage1 = new System.Windows.Forms.Button();
            this.btnImage2 = new System.Windows.Forms.Button();
            this.btnLoadFromFile = new System.Windows.Forms.Button();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).BeginInit();
            this.SuspendLayout();
            // 
            // pictureBox1
            // 
            this.pictureBox1.Image = global::MyProject.Properties.Resources.img1;
            this.pictureBox1.Location = new System.Drawing.Point(202, 27);
            this.pictureBox1.Name = "pictureBox1";
            this.pictureBox1.Size = new System.Drawing.Size(371, 177);
            this.pictureBox1.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
            this.pictureBox1.TabIndex = 0;
            this.pictureBox1.TabStop = false;
            // 
            // btnSwitchingBetweenImages
            // 
            this.btnSwitchingBetweenImages.Location = new System.Drawing.Point(291, 293);
            this.btnSwitchingBetweenImages.Name = "btnSwitchingBetweenImages";
            this.btnSwitchingBetweenImages.Size = new System.Drawing.Size(199, 44);
            this.btnSwitchingBetweenImages.TabIndex = 1;
            this.btnSwitchingBetweenImages.Text = "Switching Between Images";
            this.btnSwitchingBetweenImages.UseVisualStyleBackColor = true;
            this.btnSwitchingBetweenImages.Click += new System.EventHandler(this.btnSwitchingBetweenImages_Click);
            // 
            // btnImage1
            // 
            this.btnImage1.Location = new System.Drawing.Point(202, 223);
            this.btnImage1.Name = "btnImage1";
            this.btnImage1.Size = new System.Drawing.Size(166, 44);
            this.btnImage1.TabIndex = 2;
            this.btnImage1.Text = "Image 1";
            this.btnImage1.UseVisualStyleBackColor = true;
            this.btnImage1.Click += new System.EventHandler(this.btnImage1_Click);
            // 
            // btnImage2
            // 
            this.btnImage2.Location = new System.Drawing.Point(407, 223);
            this.btnImage2.Name = "btnImage2";
            this.btnImage2.Size = new System.Drawing.Size(166, 44);
            this.btnImage2.TabIndex = 3;
            this.btnImage2.Text = "Image1";
            this.btnImage2.UseVisualStyleBackColor = true;
            this.btnImage2.Click += new System.EventHandler(this.btnImage2_Click);
            // 
            // btnLoadFromFile
            // 
            this.btnLoadFromFile.Location = new System.Drawing.Point(292, 356);
            this.btnLoadFromFile.Name = "btnLoadFromFile";
            this.btnLoadFromFile.Size = new System.Drawing.Size(199, 44);
            this.btnLoadFromFile.TabIndex = 4;
            this.btnLoadFromFile.Text = "Load From File";
            this.btnLoadFromFile.UseVisualStyleBackColor = true;
            this.btnLoadFromFile.Click += new System.EventHandler(this.btnLoadFromFile_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.btnLoadFromFile);
            this.Controls.Add(this.btnImage2);
            this.Controls.Add(this.btnImage1);
            this.Controls.Add(this.btnSwitchingBetweenImages);
            this.Controls.Add(this.pictureBox1);
            this.Name = "Form1";
            this.Text = "frmPictureBox";
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.PictureBox pictureBox1;
        private System.Windows.Forms.Button btnSwitchingBetweenImages;
        private System.Windows.Forms.Button btnImage1;
        private System.Windows.Forms.Button btnImage2;
        private System.Windows.Forms.Button btnLoadFromFile;
    }
}

