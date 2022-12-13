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
using System.Windows.Navigation;
using System.Windows.Shapes;
 
namespace Quiz_Game_WPF_MOO_ICT
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        static string filename = "pytania.txt";
        int i = 0;
        int score;
        static string[] lines = File.ReadAllLines(filename);
        public static int numberOfQuestions = lines.Length / 6;
        int[] questionNumbers = new int[numberOfQuestions];


        public MainWindow()
        {
            InitializeComponent();

            StartGame();
            NextQuestion();
        }
 
        private void checkAnswer(object sender, RoutedEventArgs e)
        {
            Button senderButton = sender as Button;
            if (senderButton.Tag.ToString() == "1")
            {
                score++;
            }
            scoreText.Content = "Answered Correctly " + score + "/" + numberOfQuestions;
            NextQuestion();
        }
 
        private void RestartGame()
        {

            i = 0;
            score = 0;
            StartGame();
        }

        private void NextQuestion()
        {
            if (i+1 > numberOfQuestions*6)
            {
                Window3 window3 = new Window3();
                window3.score.Text = score + "/" + numberOfQuestions;
                RestartGame();
                window3.ShowDialog();
            }
            txtQuestion.Text = lines[i];
            ans1.Content = lines[i+1];
            ans2.Content = lines[i+2];
            ans3.Content = lines[i+3];
            ans4.Content = lines[i+4];
            int x = int.Parse(lines[i + 5]);
            
            switch ( x )
            {
                case 1:
                    ans1.Tag = 1;
                    break;
                case 2:
                    ans2.Tag = 1;
                    break;
                case 3:
                    ans3.Tag = 1;
                    break;
                case 4:
                    ans4.Tag = 1;
                    break;
            }
            i += 6;
        }

        private void StartGame()
        {
            for (int j=0; j<numberOfQuestions; j++)
            {
                questionNumbers[j] = j+1;
            }
            Random random = new Random();
            questionNumbers = questionNumbers.OrderBy(x => random.Next()).ToArray();
            questionOrder.Content = null;
            for (int i = 0; i < numberOfQuestions; i++)
            {
                questionOrder.Content += " " + questionNumbers[i].ToString();
            }
        }
    }
}