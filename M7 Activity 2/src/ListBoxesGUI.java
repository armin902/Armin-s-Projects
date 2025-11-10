import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.*;
import javax.swing.event.ListSelectionEvent;
import javax.swing.event.ListSelectionEvent;
import javax.swing.event.ListSelectionListener;


public class ListBoxesGUI implements ActionListener {
    private static JLabel label1, label2;
    private static JButton button1, button2, button3, button4;
    private static JList<String> leftListBox;
    private static JList<String> rightListBox;
    private static int leftIndexList, rightIndexList;
    private static DefaultListModel<String> modelLeft = new DefaultListModel<>();
    private static DefaultListModel<String> modelRight = new DefaultListModel<>();

    public static void main(String[] args)
    {
        createWindow();
    }

    private static void createWindow()  // Creating the frame
    {
        JFrame frame = new JFrame("List Boxes GUI");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        createUI(frame);
        frame.setSize(560, 400);
        frame.setLocationRelativeTo(null);  // Sets window to be centered on runtime opening
        frame.setVisible(true);
    }

    private static void createUI(final JFrame frame)    // Assigning and importing the frame's contents
    {
        JPanel panel = new JPanel();
        ListBoxesGUI myLists = new ListBoxesGUI();
        GridBagLayout layout = new GridBagLayout();
        GridBagConstraints gbc = new GridBagConstraints();
        panel.setLayout(layout);
        label1 = new JLabel("List Box 1");
        label2 = new JLabel("List Box 2");
        button1 = new JButton("Add");
        button2 = new JButton("Add All");
        button3 = new JButton("Remove");
        button4 = new JButton("Remove All");
        button1.addActionListener(myLists);
        button2.addActionListener(myLists);
        button3.addActionListener(myLists);
        button4.addActionListener(myLists);

        modelLeft.addElement("SWENG-311");
        modelLeft.addElement("SWENG-411");
        modelLeft.addElement("SWENG-431");
        modelLeft.addElement("CMPSC-221");

        leftListBox = new JList<>(modelLeft);
        leftListBox.setSelectionMode(ListSelectionModel.SINGLE_SELECTION);
        leftListBox.setVisibleRowCount(-1);
        leftListBox.setSize(250, 250);
        leftListBox.setVisible(true);
        leftListBox.setSelectedIndex(3); // ** keep an eye on
        JScrollPane scrollPaneLeft = new JScrollPane(leftListBox);
        scrollPaneLeft.setVerticalScrollBarPolicy(JScrollPane.VERTICAL_SCROLLBAR_AS_NEEDED);
        scrollPaneLeft.setHorizontalScrollBarPolicy(JScrollPane.HORIZONTAL_SCROLLBAR_AS_NEEDED);
        scrollPaneLeft.setPreferredSize(new Dimension(250, 100));
        leftListBox.addListSelectionListener(new ListSelectionListener() {
            @Override
            public void valueChanged(ListSelectionEvent e) {
                JList leftList = (JList)e.getSource();
                leftIndexList = ((JList<?>) e.getSource()).getSelectedIndex();
                // JOptionPane.showMessageDialog(frame, leftList.getSelectedValue());
            }
        });

        rightListBox = new JList<>(modelRight);
        rightListBox.setSelectionMode(ListSelectionModel.SINGLE_SELECTION);
        rightListBox.setVisibleRowCount(-1);
        rightListBox.setSize(250, 250);
        rightListBox.setVisible(true);
        rightListBox.setSelectedIndex(0);
        JScrollPane scrollPaneRight = new JScrollPane(rightListBox);
        scrollPaneRight.setVerticalScrollBarPolicy(JScrollPane.VERTICAL_SCROLLBAR_AS_NEEDED);
        scrollPaneRight.setHorizontalScrollBarPolicy(JScrollPane.HORIZONTAL_SCROLLBAR_AS_NEEDED);
        scrollPaneRight.setPreferredSize(new Dimension(250, 100));
        rightListBox.addListSelectionListener(new ListSelectionListener() {
            @Override
            public void valueChanged(ListSelectionEvent e) {
                JList rightList = (JList)e.getSource();
                rightIndexList = ((JList<?>) e.getSource()).getSelectedIndex();
            }
        });

        gbc.fill = GridBagConstraints.HORIZONTAL;
        gbc.gridx = 0; gbc.gridy = 0; panel.add(label1, gbc);
        gbc.gridx = 9; gbc.gridy = 0; panel.add(label2,gbc);
        gbc.weightx = 0.2;
        gbc.gridwidth = 4; gbc.gridheight = 6;
        gbc.fill = GridBagConstraints.BOTH;
        gbc.gridx = 0; gbc.gridy = 1; panel.add(scrollPaneLeft, gbc);
        gbc.gridwidth = 6; gbc.gridheight = 6;
        gbc.fill = GridBagConstraints.BOTH;
        gbc.gridx = 9; gbc.gridy = 1; panel.add(scrollPaneRight, gbc);
        gbc.weightx = 0.0; gbc.weighty = 0.0;
        gbc.gridwidth = 1; gbc.gridheight = 1;
        gbc.insets = new Insets(3,3,3,3);
        gbc.gridx = 5; gbc.gridy = 1; panel.add(button1, gbc);
        gbc.gridx = 5; gbc.gridy = 3; panel.add(button2, gbc);
        gbc.gridx = 5; gbc.gridy = 5; panel.add(button3, gbc);
        gbc.gridx = 5; gbc.gridy = 7; panel.add(button4, gbc);


        frame.getContentPane().add(panel, BorderLayout.CENTER);
    }

    public void actionPerformed(ActionEvent e)
    {
        String command = e.getActionCommand();
        if(command == "Add")
        {
            for (int i = 0; i < modelRight.size(); i++)
            {
                if (leftListBox.getSelectedValue() == modelRight.getElementAt(i))
                {
                    return;
                }
                if (leftListBox.getSelectedValue() == null)
                {
                    return;
                }
            }
            modelRight.addElement(leftListBox.getSelectedValue());
        }
        else if (command == "Add All")
        {
            if (modelRight.isEmpty())
            {
                for (int i = 0; i < modelLeft.size(); i++)
                {
                    modelRight.addElement(modelLeft.getElementAt(i));
                }
                return;
            }
            int counter = 0;
            for (int i = 0; i < modelLeft.size(); i++) {
                for (int j = 0; j < modelRight.size(); j++)
                {
                    if(modelLeft.getElementAt(i) != modelRight.getElementAt(j))
                    {
                        counter++;
                    }
                }
                if (counter == modelRight.size())
                {
                    modelRight.addElement(modelLeft.getElementAt(i));
                }
                counter = 0;
            }
        }
        else if (command == "Remove")
        {
           if (rightListBox.getSelectedValue() == null)
           {
               return;
           }
           modelRight.removeElement(rightListBox.getSelectedValue());
        }
        else if (command == "Remove All")
        {
            modelRight.clear();
        }
    }
}