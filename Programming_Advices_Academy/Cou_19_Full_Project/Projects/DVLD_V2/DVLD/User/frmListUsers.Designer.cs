namespace DVLD.User
{
    partial class frmListUsers
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
            components = new System.ComponentModel.Container();
            pbPersonsImage = new PictureBox();
            lblTitle = new Label();
            label1 = new Label();
            cbFilterBy = new ComboBox();
            cbIsActive = new ComboBox();
            txtFilterValue = new TextBox();
            btnAddUser = new Button();
            dgvUsers = new DataGridView();
            cmsUsers = new ContextMenuStrip(components);
            showDetailsToolStripMenuItem = new ToolStripMenuItem();
            addNewUserToolStripMenuItem = new ToolStripMenuItem();
            editToolStripMenuItem = new ToolStripMenuItem();
            deleteToolStripMenuItem = new ToolStripMenuItem();
            changePasswordToolStripMenuItem = new ToolStripMenuItem();
            sendEmailToolStripMenuItem = new ToolStripMenuItem();
            phoneCallToolStripMenuItem = new ToolStripMenuItem();
            btnClose = new Button();
            lblRecordsCount = new Label();
            label2 = new Label();
            ((System.ComponentModel.ISupportInitialize)pbPersonsImage).BeginInit();
            ((System.ComponentModel.ISupportInitialize)dgvUsers).BeginInit();
            cmsUsers.SuspendLayout();
            SuspendLayout();
            // 
            // pbPersonsImage
            // 
            pbPersonsImage.Anchor = AnchorStyles.Top;
            pbPersonsImage.Image = Properties.Resources.management_2;
            pbPersonsImage.Location = new Point(327, 12);
            pbPersonsImage.Name = "pbPersonsImage";
            pbPersonsImage.Size = new Size(201, 149);
            pbPersonsImage.SizeMode = PictureBoxSizeMode.Zoom;
            pbPersonsImage.TabIndex = 0;
            pbPersonsImage.TabStop = false;
            // 
            // lblTitle
            // 
            lblTitle.Anchor = AnchorStyles.Top;
            lblTitle.AutoSize = true;
            lblTitle.Font = new Font("Segoe UI", 24F, FontStyle.Bold, GraphicsUnit.Point, 0);
            lblTitle.ForeColor = Color.Red;
            lblTitle.Location = new Point(323, 164);
            lblTitle.Name = "lblTitle";
            lblTitle.Size = new Size(217, 45);
            lblTitle.TabIndex = 1;
            lblTitle.Text = "Manage User";
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Font = new Font("Segoe UI", 14.25F, FontStyle.Bold, GraphicsUnit.Point, 0);
            label1.ForeColor = Color.Black;
            label1.Location = new Point(12, 217);
            label1.Name = "label1";
            label1.Size = new Size(89, 25);
            label1.TabIndex = 2;
            label1.Text = "Filter By:";
            // 
            // cbFilterBy
            // 
            cbFilterBy.FormattingEnabled = true;
            cbFilterBy.Items.AddRange(new object[] { "None", "User ID", "User Name", "Person ID", "Full Name", "Is Active" });
            cbFilterBy.Location = new Point(107, 218);
            cbFilterBy.Name = "cbFilterBy";
            cbFilterBy.Size = new Size(225, 23);
            cbFilterBy.TabIndex = 3;
            cbFilterBy.SelectedIndexChanged += cbFilterBy_SelectedIndexChanged;
            // 
            // cbIsActive
            // 
            cbIsActive.FormattingEnabled = true;
            cbIsActive.Items.AddRange(new object[] { "All", "Yes", "No" });
            cbIsActive.Location = new Point(338, 218);
            cbIsActive.Name = "cbIsActive";
            cbIsActive.Size = new Size(106, 23);
            cbIsActive.TabIndex = 4;
            cbIsActive.SelectedIndexChanged += cbIsActive_SelectedIndexChanged;
            // 
            // txtFilterValue
            // 
            txtFilterValue.Location = new Point(450, 218);
            txtFilterValue.Name = "txtFilterValue";
            txtFilterValue.Size = new Size(239, 23);
            txtFilterValue.TabIndex = 5;
            txtFilterValue.TextChanged += txtFilterValue_TextChanged;
            txtFilterValue.KeyPress += txtFilterValue_KeyPress;
            // 
            // btnAddUser
            // 
            btnAddUser.Anchor = AnchorStyles.Top | AnchorStyles.Right;
            btnAddUser.BackColor = Color.Transparent;
            btnAddUser.BackgroundImage = Properties.Resources.user_1;
            btnAddUser.BackgroundImageLayout = ImageLayout.Zoom;
            btnAddUser.FlatAppearance.BorderSize = 0;
            btnAddUser.FlatStyle = FlatStyle.Flat;
            btnAddUser.Location = new Point(802, 200);
            btnAddUser.Name = "btnAddUser";
            btnAddUser.Size = new Size(44, 41);
            btnAddUser.TabIndex = 6;
            btnAddUser.UseVisualStyleBackColor = false;
            btnAddUser.Click += btnAddUser_Click;
            // 
            // dgvUsers
            // 
            dgvUsers.AllowUserToAddRows = false;
            dgvUsers.Anchor = AnchorStyles.Top | AnchorStyles.Bottom | AnchorStyles.Left | AnchorStyles.Right;
            dgvUsers.BackgroundColor = Color.White;
            dgvUsers.ColumnHeadersHeightSizeMode = DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            dgvUsers.ContextMenuStrip = cmsUsers;
            dgvUsers.Location = new Point(12, 247);
            dgvUsers.Name = "dgvUsers";
            dgvUsers.Size = new Size(834, 258);
            dgvUsers.TabIndex = 7;
            dgvUsers.CellContentDoubleClick += dgvUsers_CellContentDoubleClick;
            // 
            // cmsUsers
            // 
            cmsUsers.Font = new Font("Segoe UI", 9.75F, FontStyle.Bold, GraphicsUnit.Point, 0);
            cmsUsers.Items.AddRange(new ToolStripItem[] { showDetailsToolStripMenuItem, addNewUserToolStripMenuItem, editToolStripMenuItem, deleteToolStripMenuItem, changePasswordToolStripMenuItem, sendEmailToolStripMenuItem, phoneCallToolStripMenuItem });
            cmsUsers.Name = "cmsPeople";
            cmsUsers.Size = new Size(181, 158);
            // 
            // showDetailsToolStripMenuItem
            // 
            showDetailsToolStripMenuItem.Font = new Font("Segoe UI", 9.75F);
            showDetailsToolStripMenuItem.Image = Properties.Resources.list;
            showDetailsToolStripMenuItem.Name = "showDetailsToolStripMenuItem";
            showDetailsToolStripMenuItem.Size = new Size(180, 22);
            showDetailsToolStripMenuItem.Text = "Show Details";
            showDetailsToolStripMenuItem.Click += showDetailsToolStripMenuItem_Click;
            // 
            // addNewUserToolStripMenuItem
            // 
            addNewUserToolStripMenuItem.Font = new Font("Segoe UI", 9.75F);
            addNewUserToolStripMenuItem.Image = Properties.Resources.Add_Person_72;
            addNewUserToolStripMenuItem.ImageTransparentColor = Color.White;
            addNewUserToolStripMenuItem.Name = "addNewUserToolStripMenuItem";
            addNewUserToolStripMenuItem.Size = new Size(180, 22);
            addNewUserToolStripMenuItem.Text = "Add New User";
            addNewUserToolStripMenuItem.Click += addNewUserToolStripMenuItem_Click;
            // 
            // editToolStripMenuItem
            // 
            editToolStripMenuItem.Font = new Font("Segoe UI", 9.75F);
            editToolStripMenuItem.Image = Properties.Resources.edit;
            editToolStripMenuItem.Name = "editToolStripMenuItem";
            editToolStripMenuItem.Size = new Size(180, 22);
            editToolStripMenuItem.Text = "Edit";
            editToolStripMenuItem.Click += editToolStripMenuItem_Click;
            // 
            // deleteToolStripMenuItem
            // 
            deleteToolStripMenuItem.Font = new Font("Segoe UI", 9.75F);
            deleteToolStripMenuItem.Image = Properties.Resources.delete;
            deleteToolStripMenuItem.Name = "deleteToolStripMenuItem";
            deleteToolStripMenuItem.Size = new Size(180, 22);
            deleteToolStripMenuItem.Text = "Delete";
            deleteToolStripMenuItem.Click += deleteToolStripMenuItem_Click;
            // 
            // changePasswordToolStripMenuItem
            // 
            changePasswordToolStripMenuItem.Font = new Font("Segoe UI", 9.75F, FontStyle.Regular, GraphicsUnit.Point, 0);
            changePasswordToolStripMenuItem.Image = Properties.Resources.secure;
            changePasswordToolStripMenuItem.Name = "changePasswordToolStripMenuItem";
            changePasswordToolStripMenuItem.Size = new Size(180, 22);
            changePasswordToolStripMenuItem.Text = "Change Password";
            changePasswordToolStripMenuItem.Click += changePasswordToolStripMenuItem_Click;
            // 
            // sendEmailToolStripMenuItem
            // 
            sendEmailToolStripMenuItem.Font = new Font("Segoe UI", 9.75F);
            sendEmailToolStripMenuItem.Image = Properties.Resources.file;
            sendEmailToolStripMenuItem.Name = "sendEmailToolStripMenuItem";
            sendEmailToolStripMenuItem.Size = new Size(180, 22);
            sendEmailToolStripMenuItem.Text = "Send Email";
            // 
            // phoneCallToolStripMenuItem
            // 
            phoneCallToolStripMenuItem.Font = new Font("Segoe UI", 9.75F);
            phoneCallToolStripMenuItem.Image = Properties.Resources.phone;
            phoneCallToolStripMenuItem.Name = "phoneCallToolStripMenuItem";
            phoneCallToolStripMenuItem.Size = new Size(180, 22);
            phoneCallToolStripMenuItem.Text = "Phone Call";
            // 
            // btnClose
            // 
            btnClose.Anchor = AnchorStyles.Bottom | AnchorStyles.Right;
            btnClose.BackColor = Color.White;
            btnClose.FlatStyle = FlatStyle.Flat;
            btnClose.Font = new Font("Segoe UI", 14.25F, FontStyle.Bold, GraphicsUnit.Point, 0);
            btnClose.ForeColor = Color.Red;
            btnClose.Location = new Point(745, 511);
            btnClose.Name = "btnClose";
            btnClose.Size = new Size(100, 38);
            btnClose.TabIndex = 12;
            btnClose.Text = "Close";
            btnClose.UseVisualStyleBackColor = false;
            btnClose.Click += btnClose_Click;
            // 
            // lblRecordsCount
            // 
            lblRecordsCount.Anchor = AnchorStyles.Bottom | AnchorStyles.Left;
            lblRecordsCount.AutoSize = true;
            lblRecordsCount.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point, 0);
            lblRecordsCount.ForeColor = Color.Black;
            lblRecordsCount.Location = new Point(83, 508);
            lblRecordsCount.Name = "lblRecordsCount";
            lblRecordsCount.Size = new Size(24, 21);
            lblRecordsCount.TabIndex = 11;
            lblRecordsCount.Text = "??";
            // 
            // label2
            // 
            label2.Anchor = AnchorStyles.Bottom | AnchorStyles.Left;
            label2.AutoSize = true;
            label2.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point, 0);
            label2.ForeColor = Color.Black;
            label2.Location = new Point(12, 508);
            label2.Name = "label2";
            label2.Size = new Size(74, 21);
            label2.TabIndex = 10;
            label2.Text = "Records:";
            // 
            // frmListUsers
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            BackColor = Color.White;
            ClientSize = new Size(858, 553);
            Controls.Add(btnClose);
            Controls.Add(lblRecordsCount);
            Controls.Add(label2);
            Controls.Add(dgvUsers);
            Controls.Add(btnAddUser);
            Controls.Add(txtFilterValue);
            Controls.Add(cbIsActive);
            Controls.Add(cbFilterBy);
            Controls.Add(label1);
            Controls.Add(lblTitle);
            Controls.Add(pbPersonsImage);
            Name = "frmListUsers";
            Text = "frmListUsers";
            Load += frmListUsers_Load;
            ((System.ComponentModel.ISupportInitialize)pbPersonsImage).EndInit();
            ((System.ComponentModel.ISupportInitialize)dgvUsers).EndInit();
            cmsUsers.ResumeLayout(false);
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private PictureBox pbPersonsImage;
        private Label lblTitle;
        private Label label1;
        private ComboBox cbFilterBy;
        private ComboBox cbIsActive;
        private TextBox txtFilterValue;
        private Button btnAddUser;
        private DataGridView dgvUsers;
        private Button btnClose;
        private Label lblRecordsCount;
        private Label label2;
        private ContextMenuStrip cmsUsers;
        private ToolStripMenuItem showDetailsToolStripMenuItem;
        private ToolStripMenuItem addNewUserToolStripMenuItem;
        private ToolStripMenuItem editToolStripMenuItem;
        private ToolStripMenuItem deleteToolStripMenuItem;
        private ToolStripMenuItem sendEmailToolStripMenuItem;
        private ToolStripMenuItem phoneCallToolStripMenuItem;
        private ToolStripMenuItem changePasswordToolStripMenuItem;
    }
}