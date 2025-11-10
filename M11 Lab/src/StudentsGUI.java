import java.awt.*;
import java.awt.event.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.*;
import javax.swing.border.Border;
import javax.swing.border.LineBorder;
import java.sql.*;


public class StudentsGUI extends JFrame implements ActionListener {
    private static JLabel label1, label2, label3, label4, label5, label6;
    private static JTextField text1, text2, text3, text4, text5;
    private static JButton button1, button2, button3, button4, button5, button6;
    private static JComboBox<String> box1;
    private static JComboBox<Integer> box2;
    private static String[] genders = {"Male", "Female"};


    public static void main(String[] args) {
        createWindow();
    }

    private static void createWindow() {
        JFrame frame = new JFrame("StudentsGUI");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        createUI(frame);
        frame.setSize(600, 400);
        frame.pack();
        frame.setLocationRelativeTo(null);
        frame.setVisible(true);
    }

    private static void createUI(final JFrame frame) {
        JPanel panel = new JPanel();
        StudentsGUI studentGUI = new StudentsGUI();
        GridBagLayout layout = new GridBagLayout();
        GridBagConstraints gbc = new GridBagConstraints();
        panel.setLayout(layout);
        label1 = new JLabel("PSU-ID");
        label2 = new JLabel("PSU-ID");
        label3 = new JLabel("NAME");
        label4 = new JLabel("NAME");
        label5 = new JLabel("Gender");
        label6 = new JLabel("Gender");
        text1 = new JTextField("", 10);
        text2 = new JTextField("", 10);
        text3 = new JTextField("", 10);
        text4 = new JTextField("", 10);
        text5 = new JTextField("", 10);
        button1 = new JButton("Load PSU-IDs");
        button1.setForeground(Color.white);
        button1.setBackground(Color.BLUE);
        button2 = new JButton("Create Table");
        button2.setForeground(Color.white);
        button2.setBackground(Color.BLUE);
        button3 = new JButton("Save");
        button3.setForeground(Color.white);
        button3.setBackground(Color.BLUE);
        button4 = new JButton("Delete");
        button4.setForeground(Color.white);
        button4.setBackground(Color.BLUE);
        button5 = new JButton("Exit");
        button5.setForeground(Color.white);
        button5.setBackground(Color.BLUE);
        button6 = new JButton("Total Students");
        button6.setForeground(Color.white);
        button6.setBackground(Color.BLUE);
        button1.addActionListener(studentGUI);
        button2.addActionListener(studentGUI);
        button3.addActionListener(studentGUI);
        button4.addActionListener(studentGUI);
        button5.addActionListener(studentGUI);
        button6.addActionListener(studentGUI);

        box1 = new JComboBox<>(genders);
        box1.setVisible(true);
        box1.setSelectedIndex(-1);

        box2 = new JComboBox<>();
        box2.setVisible(true);
        box2.setSelectedIndex(-1);

        panel.setBorder(BorderFactory.createEmptyBorder(10, 15, 10, 15));

        gbc.fill = GridBagConstraints.HORIZONTAL;
        Insets in = new Insets(2, 5, 2, 5);
        gbc.insets = in;
        gbc.gridx = 0;
        gbc.gridy = 0;
        panel.add(label1, gbc);
        gbc.gridx = 1;
        gbc.gridy = 0;
        panel.add(text1, gbc);
        gbc.gridx = 2;
        gbc.gridy = 0;
        panel.add(label2, gbc);
        gbc.gridx = 3;
        gbc.gridy = 0;
        panel.add(box2, gbc);
        gbc.gridx = 4;
        gbc.gridy = 0;
        panel.add(button1, gbc);

        gbc.gridx = 0;
        gbc.gridy = 1;
        panel.add(label3, gbc);
        gbc.gridx = 1;
        gbc.gridy = 1;
        panel.add(text2, gbc);
        gbc.gridx = 2;
        gbc.gridy = 1;
        panel.add(label4, gbc);
        gbc.gridx = 3;
        gbc.gridy = 1;
        panel.add(text3, gbc);

        gbc.gridx = 0;
        gbc.gridy = 2;
        panel.add(label5, gbc);
        gbc.gridx = 1;
        gbc.gridy = 2;
        panel.add(box1, gbc);
        gbc.gridx = 2;
        gbc.gridy = 2;
        panel.add(label6, gbc);
        gbc.gridx = 3;
        gbc.gridy = 2;
        panel.add(text4, gbc);

        gbc.fill = GridBagConstraints.BOTH;

        Dimension field = new Dimension(110, 40);
        gbc.insets = new Insets(5, 5, 5, 5);
        gbc.gridx = 0;
        gbc.gridy = 3;
        panel.add(button2, gbc);
        gbc.gridx = 1;
        gbc.gridy = 3;
        panel.add(button3, gbc);
        button2.setPreferredSize(field);
        button3.setPreferredSize(field);


        gbc.gridheight = 2;
        gbc.gridx = 2;
        gbc.gridy = 3;
        panel.add(button6, gbc);
        gbc.gridx = 3;
        gbc.gridy = 3;
        panel.add(text5, gbc);
        Dimension fieldSize = new Dimension(150, 100);
        button6.setPreferredSize(fieldSize);
        fieldSize = new Dimension(200, 100);
        text5.setPreferredSize(fieldSize);

        gbc.gridheight = 1;
        gbc.gridx = 0;
        gbc.gridy = 4;
        panel.add(button4, gbc);
        gbc.gridx = 1;
        gbc.gridy = 4;
        panel.add(button5, gbc);
        button4.setPreferredSize(field);
        button5.setPreferredSize(field);


        frame.getContentPane().add(panel, BorderLayout.CENTER);
    }

    public void actionPerformed(ActionEvent s)
    {
        String command = s.getActionCommand();
        if (command == "Exit")
        {
            System.exit(0);
        }
        else if (command == "Create Table")
        {
            String dbName = "Students";
            String connectionURL = "jdbc:derby:" + dbName + ";create=true";
            Connection conn = null;
            Statement stm;
            PreparedStatement psstm;
            ResultSet myResult;
            String data;
            String createString = "CREATE TABLE StudentBio (PSU_ID INT, NAME VARCHAR(30), GENDER VARCHAR(10))";
            // VARCHAR2 is not compatible!

            try
            {
                conn = DriverManager.getConnection(connectionURL); // Connects to the database using JDBC
                stm = conn.createStatement();
                myResult = conn.getMetaData().getTables(null, null, null,
                        new String[]{"StudentBio"});

                if (myResult.next())
                {
                    System.out.println("Table already exists.");
                }
                else
                {
                    stm.execute(createString);
                    System.out.println("Table is created");
                }

                conn.close();
                stm.close();
            }

            catch (Throwable e)     // Intercepts any errors, NullPointerException, ArrayIndexOutOfBoundsException, etc.
            {

                System.out.println("...exception thrown:");
                e.printStackTrace(System.out);      // Prints detailed report, type of error, message, etc.
            }
        }

        else if (command == "Save")
        {
            String dbName = "Students";
            String connectionURL = "jdbc:derby:" + dbName + ";create=true";
            Connection conn = null;
            Statement stm;
            PreparedStatement psstm;
            ResultSet myResult, myResult1;
            boolean finish = false;
            String data;

            try
            {
                conn = DriverManager.getConnection(connectionURL);
                stm = conn.createStatement();
                myResult = conn.getMetaData().getTables(null, null, null,
                        new String[]{"StudentBio"});

                if (myResult.next())
                {
                    System.out.println("Table does not exist.");
                }

                else
                {
                    String x = text1.getText();
                    int id = Integer.parseInt(x);
                    String name = text2.getText();
                    String gender = box1.getSelectedItem().toString();
                    myResult1 = stm.executeQuery("SELECT PSU_ID FROM StudentBio WHERE PSU_ID = " + id + "");

                        if (myResult1.next())
                        {
                            System.out.println("Duplicate PSU_ID");
                            conn.close();
                            stm.close();
                            return;
                        }


                    psstm = conn.prepareStatement("insert into StudentBio (PSU_ID, NAME, GENDER) values (?,?,?)");
                    psstm.setInt(1, id);
                    psstm.setString(2, name);
                    psstm.setString(3, gender);
                    psstm.executeUpdate();


                    myResult1 = stm.executeQuery("select PSU_ID, NAME, GENDER from StudentBio");
                    System.out.println("The following records has been added.");
                    System.out.println("=============");
                    while (myResult1.next())
                    {
                        System.out.println(myResult1.getInt(1) + " " + myResult1.getString(2) + " " +
                                myResult1.getString(3));
                    }
                    System.out.println("=============");


                }
                conn.close();
                stm.close();
            }

            catch (Throwable e)
            {
                System.out.println("...exception thrown:");
                e.printStackTrace(System.out);
            }


        }

        else if (command == "Delete")
        {
            String dbName = "Students";
            String connectionURL = "jdbc:derby:" + dbName + ";create=true";
            Connection conn = null;
            Statement stm;
            PreparedStatement psstm;
            ResultSet myResult, myResult1;
            boolean finish = false;
            String data;

            try
            {
                conn = DriverManager.getConnection(connectionURL);
                stm = conn.createStatement();
                myResult = conn.getMetaData().getTables(null, null, null,
                        new String[]{"StudentBio"});

                if (myResult.next())
                {
                    System.out.println("Table does not exist.");
                }
                else
                {
                    myResult1 = stm.executeQuery("select PSU_ID, NAME, GENDER from StudentBio");
                    System.out.println("The following records have been added.");
                    System.out.println("=============");

                    while (myResult1.next())
                    {
                        System.out.println(myResult1.getInt(1) + " " + myResult1.getString(2) + " " +
                                myResult1.getString(3));
                    }
                    System.out.println("=============");

                    int id = Integer.parseInt(box2.getSelectedItem().toString());
                    String name = text3.getText();
                    String gender = text4.getText();

                    psstm = conn.prepareStatement("delete from StudentBio where PSU_ID = ? and NAME = ? and GENDER = ?");
                   psstm.setInt(1, id);
                   psstm.setString(2, name);
                   psstm.setString(3, gender);
                   psstm.executeUpdate();


                    JOptionPane.showMessageDialog(null, "Record was deleted successfully.");



                    myResult1 = stm.executeQuery("select PSU_ID, NAME, GENDER from StudentBio");
                    System.out.println("The following records has been added.");
                    System.out.println("=============");
                    while (myResult1.next())
                    {
                        System.out.println(myResult1.getInt(1) + " " + myResult1.getString(2) + " " +
                                myResult1.getString(3));
                    }
                    System.out.println("=============");
                }
                conn.close();
                stm.close();
            }

            catch (Throwable e)
            {
                System.out.println("...exception thrown:");
                e.printStackTrace(System.out);
            }
        }

        else if (command == "Load PSU-IDs")
        {
            String dbName = "Students";
            String connectionURL = "jdbc:derby:" + dbName + ";create=true";
            Connection conn = null;
            Statement stm;
            PreparedStatement psstm;
            ResultSet myResult, myResult1;
            boolean finish = false;
            String data;
            int i = 0;

            try
            {
                conn = DriverManager.getConnection(connectionURL);
                stm = conn.createStatement();
                myResult = conn.getMetaData().getTables(null, null, null, new String[]{"StudentBio"});            // Retrieve the data of the table

                if (myResult.next())
                {
                    System.out.println("Table does not exist.");
                }

                else
                {
                    myResult1 = stm.executeQuery("select PSU_ID from StudentBio");
                    box2.removeAllItems();

                    while (myResult1.next())
                    {
                        i = myResult1.getInt(1);
                        box2.addItem(i);
                    }

                    System.out.println("PSU_IDs have been loaded.");
                }
                conn.close();
                stm.close();
            }
            catch(Throwable e)
            {
                System.out.println("...exception thrown:");
                e.printStackTrace(System.out);
            }
        }

        else if (command == "Total Students")
        {
            String dbName = "Students";
            String connectionURL = "jdbc:derby:" + dbName + ";create=true";
            Connection conn = null;
            Statement stm;
            PreparedStatement psstm;
            ResultSet myResult, myResult1;
            boolean finish = false;
            String data;
            int totalStudents = 0;

            try
            {
                conn = DriverManager.getConnection(connectionURL);
                stm = conn.createStatement();
                myResult1 = conn.getMetaData().getTables(null, null, null,
                new String[]{"StudentBio"});

                if (myResult1.next())
                {
                    System.out.println("Table does not exist.");
                }

                else
                {
                    myResult1 = stm.executeQuery("select PSU_ID, NAME, GENDER from StudentBio");

                    while(myResult1.next())
                    {
                        totalStudents++;
                    }
                    text5.setText("Total Students: " + totalStudents);

                    myResult1 = stm.executeQuery("select PSU_ID, NAME, GENDER from StudentBio");
                    System.out.println("The total records:");
                    System.out.println("=============");
                    while (myResult1.next())
                    {
                        System.out.println(myResult1.getInt(1) + " " + myResult1.getString(2) + " " +
                                myResult1.getString(3));
                    }
                    System.out.println("=============");
                }
                conn.close();
                stm.close();
            }
            catch (Throwable e)
            {
                System.out.println("...exception thrown:");
                e.printStackTrace(System.out);
            }
        }

    }
}
