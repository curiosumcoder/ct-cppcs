namespace wfa1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void bOK_Click(object sender, EventArgs e)
        {
            //tbDemo.Text = "Hello World!";
            //tbDemo.Text = DateTime.Now.ToString();

            var date = mcMain.SelectionStart;
            var text = tbDemo.Text;

            //lvMain.Items.Add(new ListViewItem("DEMO"));

            //lvMain.Items.Clear();

            //for (int i = 0; i < 10; i++)
            //{
            //    string s = $"{text} - {date.ToString()}";
            //    lvMain.Items.Add(new ListViewItem(s));
            //}

            //System.Collections
            //System.Collections.Generic

            List<string> list = new List<string>();

            var l = list[0];

            for (int i = 0; i < 10; i++)
            {
                string s = $"{text} - {date.ToString()}";
                list.Add(s);
            }

            foreach (var s in list)
            {
                lvMain.Items.Add(new ListViewItem(s));
            }
        }

        private void exitToolStripMenuItem_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            var j = new Juego();
            j.Funcion1();
        }
    }
}