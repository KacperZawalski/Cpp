using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Shapes;

namespace Quiz_Game_WPF_MOO_ICT
{
    /// <summary>
    /// Logika interakcji dla klasy Window2.xaml
    /// </summary>
    public partial class Window2 : Window
    {
        public Window2()
        {
            InitializeComponent();
        }

        private void ButtonAddQuestion_Click(object sender, RoutedEventArgs e)
        {
            TextWriter tsw = new StreamWriter(@"pytania.txt", true);
            if  (!(Question.Text.Equals("") && Answer1.Text.Equals("") && Answer2.Text.Equals("") && Answer3.Text.Equals("") && Answer4.Text.Equals("") && CorrectAnswer.Text.Equals("")))
            {
                tsw.WriteLine(Question.Text);
                tsw.WriteLine(Answer1.Text);
                tsw.WriteLine(Answer2.Text);
                tsw.WriteLine(Answer3.Text);
                tsw.WriteLine(Answer4.Text);
                tsw.WriteLine(CorrectAnswer.Text);
                Question.Text = "";
                Answer1.Text = "";
                Answer2.Text = "";
                Answer3.Text = "";
                Answer4.Text = "";
                CorrectAnswer.Text = "";
            }
            tsw.Close();
        }
    }
}