namespace wfa1
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
            bOK = new Button();
            tbDemo = new TextBox();
            mcMain = new MonthCalendar();
            lvMain = new ListView();
            menuStrip1 = new MenuStrip();
            fileToolStripMenuItem = new ToolStripMenuItem();
            exitToolStripMenuItem = new ToolStripMenuItem();
            button1 = new Button();
            button2 = new Button();
            button3 = new Button();
            button4 = new Button();
            button5 = new Button();
            button6 = new Button();
            button7 = new Button();
            button8 = new Button();
            button9 = new Button();
            menuStrip1.SuspendLayout();
            SuspendLayout();
            // 
            // bOK
            // 
            bOK.Location = new Point(222, 46);
            bOK.Name = "bOK";
            bOK.Size = new Size(75, 23);
            bOK.TabIndex = 0;
            bOK.Text = "OK";
            bOK.UseVisualStyleBackColor = true;
            bOK.Click += bOK_Click;
            // 
            // tbDemo
            // 
            tbDemo.Location = new Point(12, 46);
            tbDemo.Name = "tbDemo";
            tbDemo.Size = new Size(204, 23);
            tbDemo.TabIndex = 1;
            // 
            // mcMain
            // 
            mcMain.Location = new Point(337, 84);
            mcMain.Name = "mcMain";
            mcMain.TabIndex = 2;
            // 
            // lvMain
            // 
            lvMain.Location = new Point(12, 84);
            lvMain.Name = "lvMain";
            lvMain.Size = new Size(285, 295);
            lvMain.TabIndex = 3;
            lvMain.UseCompatibleStateImageBehavior = false;
            lvMain.View = View.List;
            // 
            // menuStrip1
            // 
            menuStrip1.Items.AddRange(new ToolStripItem[] { fileToolStripMenuItem });
            menuStrip1.Location = new Point(0, 0);
            menuStrip1.Name = "menuStrip1";
            menuStrip1.Size = new Size(1025, 24);
            menuStrip1.TabIndex = 4;
            menuStrip1.Text = "menuStrip1";
            // 
            // fileToolStripMenuItem
            // 
            fileToolStripMenuItem.DropDownItems.AddRange(new ToolStripItem[] { exitToolStripMenuItem });
            fileToolStripMenuItem.Name = "fileToolStripMenuItem";
            fileToolStripMenuItem.Size = new Size(37, 20);
            fileToolStripMenuItem.Text = "File";
            // 
            // exitToolStripMenuItem
            // 
            exitToolStripMenuItem.Name = "exitToolStripMenuItem";
            exitToolStripMenuItem.Size = new Size(93, 22);
            exitToolStripMenuItem.Text = "E&xit";
            exitToolStripMenuItem.Click += exitToolStripMenuItem_Click;
            // 
            // button1
            // 
            button1.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point);
            button1.Location = new Point(337, 269);
            button1.Name = "button1";
            button1.Size = new Size(77, 69);
            button1.TabIndex = 5;
            button1.Text = "button1";
            button1.UseVisualStyleBackColor = true;
            button1.Click += button1_Click;
            // 
            // button2
            // 
            button2.Location = new Point(420, 269);
            button2.Name = "button2";
            button2.Size = new Size(77, 69);
            button2.TabIndex = 6;
            button2.Text = "button2";
            button2.UseVisualStyleBackColor = true;
            // 
            // button3
            // 
            button3.Location = new Point(508, 269);
            button3.Name = "button3";
            button3.Size = new Size(77, 69);
            button3.TabIndex = 7;
            button3.Text = "button3";
            button3.UseVisualStyleBackColor = true;
            // 
            // button4
            // 
            button4.Location = new Point(337, 344);
            button4.Name = "button4";
            button4.Size = new Size(77, 69);
            button4.TabIndex = 8;
            button4.Text = "button4";
            button4.UseVisualStyleBackColor = true;
            // 
            // button5
            // 
            button5.Location = new Point(420, 344);
            button5.Name = "button5";
            button5.Size = new Size(77, 69);
            button5.TabIndex = 9;
            button5.Text = "button5";
            button5.UseVisualStyleBackColor = true;
            // 
            // button6
            // 
            button6.Location = new Point(508, 344);
            button6.Name = "button6";
            button6.Size = new Size(77, 69);
            button6.TabIndex = 10;
            button6.Text = "button6";
            button6.UseVisualStyleBackColor = true;
            // 
            // button7
            // 
            button7.Location = new Point(337, 419);
            button7.Name = "button7";
            button7.Size = new Size(77, 69);
            button7.TabIndex = 11;
            button7.Text = "button7";
            button7.UseVisualStyleBackColor = true;
            // 
            // button8
            // 
            button8.Location = new Point(420, 419);
            button8.Name = "button8";
            button8.Size = new Size(77, 69);
            button8.TabIndex = 12;
            button8.Text = "button8";
            button8.UseVisualStyleBackColor = true;
            // 
            // button9
            // 
            button9.Location = new Point(503, 419);
            button9.Name = "button9";
            button9.Size = new Size(77, 69);
            button9.TabIndex = 13;
            button9.Text = "button9";
            button9.UseVisualStyleBackColor = true;
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(1025, 628);
            Controls.Add(button9);
            Controls.Add(button8);
            Controls.Add(button7);
            Controls.Add(button6);
            Controls.Add(button5);
            Controls.Add(button4);
            Controls.Add(button3);
            Controls.Add(button2);
            Controls.Add(button1);
            Controls.Add(lvMain);
            Controls.Add(mcMain);
            Controls.Add(tbDemo);
            Controls.Add(bOK);
            Controls.Add(menuStrip1);
            MainMenuStrip = menuStrip1;
            Name = "Form1";
            Text = "Form1";
            menuStrip1.ResumeLayout(false);
            menuStrip1.PerformLayout();
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private Button bOK;
        private TextBox tbDemo;
        private MonthCalendar mcMain;
        private ListView lvMain;
        private MenuStrip menuStrip1;
        private ToolStripMenuItem fileToolStripMenuItem;
        private ToolStripMenuItem exitToolStripMenuItem;
        private Button button1;
        private Button button2;
        private Button button3;
        private Button button4;
        private Button button5;
        private Button button6;
        private Button button7;
        private Button button8;
        private Button button9;
    }
}