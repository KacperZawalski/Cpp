using System;
using System.Collections.Generic;
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
    /// Logika interakcji dla klasy Window1.xaml
    /// </summary>
    public partial class Window1 : Window
    {
        public Window1()
        {
            InitializeComponent();
            
        }
        private void ButtonSubmit_Click(object sender, RoutedEventArgs e)
        {
            if (InputUser.Text == "admin")
            {
                Window2 window2 = new Window2();
                window2.ShowDialog();
            }
            else
            {
                MainWindow mainWindow = new MainWindow();
                mainWindow.ShowDialog();
            }
        }
    }
}