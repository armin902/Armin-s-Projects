import java.awt.*;
import javax.swing.*;
import java.awt.event.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.event.ListSelectionEvent;
import javax.swing.event.ListSelectionListener;
import static javax.swing.JOptionPane.showMessageDialog;

public class menu extends JFrame implements ActionListener
{
    private static final long serialVersionUID = 1L;
    private static JPanel cardPanel, card1, card2, card3, panel1, panel2, panel3, buttonPanel, buttonPanel2, buttonPanel3,
                            topLabel1, topLabel2, topLabel3;
    private static JTextField text1, text2, text3, text4, text5, text6, text7, text8, text9;
    private static JLabel label1, label2, label3, label4, label5, label6, label7, label8, label9, label10, label11, label12;
    private static JButton button1, button2, button3, button4, button5, button6, button7, button8, button9;
    private static java.awt.CardLayout cardLayout = new java.awt.CardLayout();
    static JMenuBar mb;
    static JMenu bk, fc, st;
    static JMenuItem bk1, bk2, bk3, fc1, fc2, fc3, st1, st2, st3;
    static JFrame f;

    public menu()
    {
        setTitle("CardLayout GUI");
        setSize(400,300);
        cardPanel = new JPanel();
        card1 = new JPanel(new BorderLayout());
        card2 = new JPanel(new BorderLayout());
        card3 = new JPanel(new BorderLayout());
        buttonPanel = new JPanel(new FlowLayout(FlowLayout.CENTER, 15, 30));
        buttonPanel2 = new JPanel(new FlowLayout(FlowLayout.CENTER, 15, 30));
        buttonPanel3 = new JPanel(new FlowLayout(FlowLayout.CENTER, 15, 30));
        cardPanel.setLayout(cardLayout);
        panel1 = new JPanel();
        panel2 = new JPanel();
        panel3 = new JPanel();
        panel1.setLayout(new GridLayout(4,3,4,5));
        panel1.setBorder(BorderFactory.createEmptyBorder(20,40,0,40));
        panel2.setLayout(new GridLayout(4,3,4,5));
        panel2.setBorder(BorderFactory.createEmptyBorder(20,40,0,40));
        panel3.setLayout(new GridLayout(4,3,4,5));
        panel3.setBorder(BorderFactory.createEmptyBorder(20,40,0,40));
        label1 = new JLabel("Book Name");
        label2 = new JLabel("Author Name");
        label3 = new JLabel("Edition Number");
        label4 = new JLabel("Faculty Name");
        label5 = new JLabel("Faculty Department");
        label6 = new JLabel("Faculty ID");
        label7 = new JLabel("Student Name");
        label8 = new JLabel("Student Major");
        label9 = new JLabel("Student ID");
        label10 = new JLabel("");
        label11 = new JLabel("");
        label12 = new JLabel("");
        label10.setOpaque(true);
        label10.setBackground(Color.YELLOW);
        label11.setOpaque(true);
        label11.setBackground(Color.YELLOW);
        label12.setOpaque(true);
        label12.setBackground(Color.YELLOW);
        label10.setHorizontalAlignment(SwingConstants.CENTER);
        label11.setHorizontalAlignment(SwingConstants.CENTER);
        label12.setHorizontalAlignment(SwingConstants.CENTER);
        topLabel1 = new JPanel(new FlowLayout(FlowLayout.CENTER));
        topLabel1.add(label10);
        topLabel2 = new JPanel(new FlowLayout(FlowLayout.CENTER));
        topLabel2.add(label11);
        topLabel3 = new JPanel(new FlowLayout(FlowLayout.CENTER));
        topLabel3.add(label12);
        text1 = new JTextField(10);
        text2 = new JTextField(10);
        text3 = new JTextField(10);
        text4 = new JTextField(10);
        text5 = new JTextField(10);
        text6 = new JTextField(10);
        text7 = new JTextField(10);
        text8 = new JTextField(10);
        text9 = new JTextField(10);
        panel1.add(label1);
        panel1.add(text1);
        panel1.add(label2);
        panel1.add(text2);
        panel1.add(label3);
        panel1.add(text3);
        panel2.add(label4);
        panel2.add(text4);
        panel2.add(label5);
        panel2.add(text5);
        panel2.add(label6);
        panel2.add(text6);
        panel3.add(label7);
        panel3.add(text7);
        panel3.add(label8);
        panel3.add(text8);
        panel3.add(label9);
        panel3.add(text9);

        button1 = new JButton("New");
        button1.addActionListener(new ActionListener()
        {
            public void actionPerformed(ActionEvent e)
            {
                String command = e.getActionCommand();
                if (command == "New")
                {
                    JOptionPane.showMessageDialog(null, "New book has been added");
                }
            }
        });
        button1.setPreferredSize(new Dimension(80,40));

        button2 = new JButton("Delete");
        button2.addActionListener(new ActionListener()
        {
            public void actionPerformed(ActionEvent e)
            {
                String command = e.getActionCommand();
                if (command == "Delete")
                {
                    JOptionPane.showMessageDialog(null, "Book has been deleted");
                }
            }
        });
        button2.setPreferredSize(new Dimension(80,40));


        button3 = new JButton("View");
        button3.addActionListener(new ActionListener()
        {
            public void actionPerformed(ActionEvent e)
            {
                String command = e.getActionCommand();
                if (command == "View")
                {
                    JOptionPane.showMessageDialog(null, "Book has been viewed");
                }
            }
        });
        button3.setPreferredSize(new Dimension(80,40));


        button4 = new JButton("New");
        button4.addActionListener(new ActionListener()
        {
            public void actionPerformed(ActionEvent e)
            {
                JOptionPane.showMessageDialog(null, "Faculty member has been added");
            }
        });
        button4.setPreferredSize(new Dimension(80,40));


        button5 = new JButton("Delete");
        button5.addActionListener(new ActionListener()
        {
            public void actionPerformed(ActionEvent e)
            {
                JOptionPane.showMessageDialog(null, "Faculty member has been deleted");
            }
        });
        button5.setPreferredSize(new Dimension(80,40));


        button6 = new JButton("View");
        button6.addActionListener(new ActionListener()
        {
            public void actionPerformed(ActionEvent e)
            {
                JOptionPane.showMessageDialog(null, "Faculty member has been viewed");
            }
        });
        button6.setPreferredSize(new Dimension(80,40));


        button7 = new JButton("New");
        button7.addActionListener(new ActionListener()
        {
            public void actionPerformed(ActionEvent e)
            {
                JOptionPane.showMessageDialog(null, "Student has been added");
            }
        });
        button7.setPreferredSize(new Dimension(80,40));


        button8 = new JButton("Delete");
        button8.addActionListener(new ActionListener()
        {
            public void actionPerformed(ActionEvent e)
            {
                JOptionPane.showMessageDialog(null, "Student has been deleted");
            }
        });
        button8.setPreferredSize(new Dimension(80,40));


        button9 = new JButton("View");
        button9.addActionListener(new ActionListener()
        {
            public void actionPerformed(ActionEvent e)
            {
                JOptionPane.showMessageDialog(null, "Student has been viewed");
            }
        });
        button9.setPreferredSize(new Dimension(80,40));

        buttonPanel.add(button1);
        buttonPanel.add(button2);
        buttonPanel.add(button3);
        buttonPanel2.add(button4);
        buttonPanel2.add(button5);
        buttonPanel2.add(button6);
        buttonPanel3.add(button7);
        buttonPanel3.add(button8);
        buttonPanel3.add(button9);
        card1.add(topLabel1, BorderLayout.NORTH);
        card1.add(panel1, BorderLayout.CENTER);
        card1.add(buttonPanel, BorderLayout.SOUTH);
        card2.add(topLabel2, BorderLayout.NORTH);
        card2.add(panel2, BorderLayout.CENTER);
        card2.add(buttonPanel2, BorderLayout.SOUTH);
        card3.add(topLabel3, BorderLayout.NORTH);
        card3.add(panel3, BorderLayout.CENTER);
        card3.add(buttonPanel3, BorderLayout.SOUTH);
        cardPanel.add(card1, "1");
        cardPanel.add(card2, "2");
        cardPanel.add(card3, "3");
        add(cardPanel, BorderLayout.CENTER);
    }

    public static void main(String[] args)
    {
        EventQueue.invokeLater(new Runnable()
        {
            @Override
            public void run()
            {
                f = new JFrame("Menu");
                menu men = new menu();
                mb = new JMenuBar();
                bk = new JMenu("Book");
                fc = new JMenu("Faculty");
                st = new JMenu("Students");
                bk1 = new JMenuItem("New_Book");
                bk2 = new JMenuItem("Delete_Book");
                bk3 = new JMenuItem("View_Book");
                fc1 = new JMenuItem("New_Faculty");
                fc2 = new JMenuItem("Delete_Faculty");
                fc3 = new JMenuItem("View_Faculty");
                st1 = new JMenuItem("New_Student");
                st2 = new JMenuItem("Delete_Student");
                st3 = new JMenuItem("View_Student");

                bk1.addActionListener(men);
                bk2.addActionListener(men);
                bk3.addActionListener(men);
                fc1.addActionListener(men);
                fc2.addActionListener(men);
                fc3.addActionListener(men);
                st1.addActionListener(men);
                st2.addActionListener(men);
                st3.addActionListener(men);

                bk.add(bk1);
                bk.add(bk2);
                bk.add(bk3);
                fc.add(fc1);
                fc.add(fc2);
                fc.add(fc3);
                st.add(st1);
                st.add(st2);
                st.add(st3);
                mb.add(bk);
                mb.add(fc);
                mb.add(st);

                menu frame = new menu();
                frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
                frame.setVisible(true);
                frame.setJMenuBar(mb);
                frame.setSize(400, 300);
                frame.setVisible(true);
            }
        });

    }

    public void actionPerformed(ActionEvent e)
    {
        String s = e.getActionCommand();
       // JOptionPane.showMessageDialog(null, s);
        if (s == "New_Book" || s == "Delete_Book" || s == "View_Book")
        {
            if (s == "New_Book")
            {
                label10.setText("Navigation from New_Book Menubar");
                cardLayout.show(cardPanel, "1");
            }
            else if (s == "Delete_Book")
            {
                label10.setText("Navigation from Delete_Book Menubar");
                cardLayout.show(cardPanel, "1");
            }
            else if (s == "View_Book")
            {
                label10.setText("Navigation from View_Book Menubar");
                cardLayout.show(cardPanel, "1");
            }
        }
        else if (s == "New_Faculty" || s == "Delete_Faculty" || s == "View_Faculty")
        {
            if (s == "New_Faculty")
            {
                label11.setText("Navigation from New_Faculty Menubar");
                cardLayout.show(cardPanel, "2");
            }
            else if (s == "Delete_Faculty")
            {
                label11.setText("Navigation from Delete_Faculty Menubar");
                cardLayout.show(cardPanel, "2");
            }
            else if (s == "View_Faculty")
            {
                label11.setText("Navigation from View_Faculty Menubar");
                cardLayout.show(cardPanel, "2");
            }
        }
        else if (s == "New_Student" || s == "Delete_Student" || s == "View_Student")
        {
            if (s == "New_Student")
            {
                label12.setText("Navigation from New_Student Menubar");
                cardLayout.show(cardPanel, "3");
            }
            else if (s == "Delete_Student")
            {
                label12.setText("Navigation from Delete_Student Menubar");
                cardLayout.show(cardPanel, "3");
            }
            else if (s == "View_Student")
            {
                label12.setText("Navigation from View_Student Menubar");
                cardLayout.show(cardPanel, "3");
            }
        }
    }

    public void show(JPanel cards, String one)
    {

    }

}