import java.awt.*;
import java.awt.BorderLayout;
import java.awt.GridBagConstraints;
import java.awt.GridBagLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import static javax.swing.JOptionPane.showMessageDialog;

import javax.swing.*;


public class Calculator implements ActionListener {
    private static JTextField inputBox;
    private double memory = 0;
    JOptionPane optionPane = new JOptionPane("Thank you for using Java!", JOptionPane.WARNING_MESSAGE);

    Calculator() {
    }

    public static void main(String[] args) {
        createWindow();
    }


    private static void createWindow() {
        JFrame frame = new JFrame("Calculator");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        createUI(frame);
        frame.setSize(300, 300);
        frame.setLocationRelativeTo(null);
        frame.setVisible(true);
    }

    private static void createUI(JFrame frame) {
        JPanel panel = new JPanel();
        Calculator calculator = new Calculator();
        GridBagLayout layout = new GridBagLayout();
        GridBagConstraints gbc = new GridBagConstraints();
        panel.setLayout(layout);

        inputBox = new JTextField("", 10);
        inputBox.setEditable(false);

        JButton mc = new JButton("mc");
        mc.setBackground(Color.lightGray);
        JButton mr = new JButton("mr");
        mr.setBackground(Color.lightGray);
        JButton mMinus = new JButton("m-");
        mMinus.setBackground(Color.lightGray);
        JButton mPlus = new JButton("m+");
        mPlus.setBackground(Color.lightGray);

        JButton ac = new JButton("AC");
        ac.setBackground(Color.lightGray);
        JButton sqrtX = new JButton("√x");
        sqrtX.setBackground(Color.lightGray);
        JButton percentage = new JButton("%");
        percentage.setBackground(Color.lightGray);
        JButton divide = new JButton("÷");
        divide.setBackground(Color.orange);
        JButton clearSpace = new JButton("CE");
        clearSpace.setBackground(Color.lightGray);

        JButton seven = new JButton("7");
        JButton eight = new JButton("8");
        JButton nine = new JButton("9");
        JButton multiply = new JButton("x");
        multiply.setBackground(Color.orange);

        JButton four = new JButton("4");
        JButton five = new JButton("5");
        JButton six = new JButton("6");
        JButton minus = new JButton("-");
        minus.setBackground(Color.orange);

        JButton one = new JButton("1");
        JButton two = new JButton("2");
        JButton three = new JButton("3");
        JButton plus = new JButton("+");
        plus.setBackground(Color.orange);

        JButton zero = new JButton("0");
        JButton dot = new JButton(".");
        JButton plusMinusToggle = new JButton("+/-");
        JButton equals = new JButton("=");
        equals.setBackground(Color.orange);

        JButton pi = new JButton("π");
        pi.setBackground(Color.lightGray);
        JButton exponent = new JButton("xy");
        exponent.setBackground(Color.lightGray);
        JButton r2 = new JButton("R2");
        r2.setBackground(Color.lightGray);
        JButton r0 = new JButton("R0");
        r0.setBackground(Color.lightGray);

        mc.addActionListener(calculator);
        mr.addActionListener(calculator);
        mMinus.addActionListener(calculator);
        mPlus.addActionListener(calculator);
        ac.addActionListener(calculator);
        sqrtX.addActionListener(calculator);
        percentage.addActionListener(calculator);
        divide.addActionListener(calculator);
        clearSpace.addActionListener(calculator);
        seven.addActionListener(calculator);
        eight.addActionListener(calculator);
        nine.addActionListener(calculator);
        multiply.addActionListener(calculator);
        four.addActionListener(calculator);
        five.addActionListener(calculator);
        six.addActionListener(calculator);
        minus.addActionListener(calculator);
        one.addActionListener(calculator);
        two.addActionListener(calculator);
        three.addActionListener(calculator);
        plus.addActionListener(calculator);
        zero.addActionListener(calculator);
        dot.addActionListener(calculator);
        plusMinusToggle.addActionListener(calculator);
        equals.addActionListener(calculator);
        pi.addActionListener(calculator);
        exponent.addActionListener(calculator);
        r2.addActionListener(calculator);
        r0.addActionListener(calculator);

        gbc.fill = GridBagConstraints.HORIZONTAL;
        gbc.gridwidth = 4;
        gbc.gridx = 0;
        gbc.gridy = 0;
        panel.add(inputBox, gbc);
        gbc.gridwidth = 1;
        gbc.insets = new Insets(2, 2, 2, 2);
        gbc.gridx = 0;
        gbc.gridy = 1;
        panel.add(mc, gbc);
        gbc.gridx = 1;
        gbc.gridy = 1;
        panel.add(mr, gbc);
        gbc.gridx = 2;
        gbc.gridy = 1;
        panel.add(mMinus, gbc);
        gbc.gridx = 3;
        gbc.gridy = 1;
        panel.add(mPlus, gbc);
        gbc.gridx = 0;
        gbc.gridy = 2;
        panel.add(ac, gbc);
        gbc.gridx = 1;
        gbc.gridy = 2;
        panel.add(sqrtX, gbc);
        gbc.gridx = 2;
        gbc.gridy = 2;
        panel.add(percentage, gbc);
        gbc.gridx = 3;
        gbc.gridy = 2;
        panel.add(divide, gbc);
        gbc.gridx = 4;
        gbc.gridy = 2;
        panel.add(clearSpace, gbc);
        gbc.gridx = 0;
        gbc.gridy = 3;
        panel.add(seven, gbc);
        gbc.gridx = 1;
        gbc.gridy = 3;
        panel.add(eight, gbc);
        gbc.gridx = 2;
        gbc.gridy = 3;
        panel.add(nine, gbc);
        gbc.gridx = 3;
        gbc.gridy = 3;
        panel.add(multiply, gbc);
        gbc.gridx = 0;
        gbc.gridy = 4;
        panel.add(four, gbc);
        gbc.gridx = 1;
        gbc.gridy = 4;
        panel.add(five, gbc);
        gbc.gridx = 2;
        gbc.gridy = 4;
        panel.add(six, gbc);
        gbc.gridx = 3;
        gbc.gridy = 4;
        panel.add(minus, gbc);
        gbc.gridx = 0;
        gbc.gridy = 5;
        panel.add(one, gbc);
        gbc.gridx = 1;
        gbc.gridy = 5;
        panel.add(two, gbc);
        gbc.gridx = 2;
        gbc.gridy = 5;
        panel.add(three, gbc);
        gbc.gridx = 3;
        gbc.gridy = 5;
        panel.add(plus, gbc);
        gbc.gridx = 0;
        gbc.gridy = 6;
        panel.add(zero, gbc);
        gbc.gridx = 1;
        gbc.gridy = 6;
        panel.add(dot, gbc);
        gbc.gridx = 2;
        gbc.gridy = 6;
        panel.add(plusMinusToggle, gbc);
        gbc.gridx = 3;
        gbc.gridy = 6;
        panel.add(equals, gbc);
        gbc.gridx = 0;
        gbc.gridy = 7;
        panel.add(pi, gbc);
        gbc.gridx = 1;
        gbc.gridy = 7;
        panel.add(exponent, gbc);
        gbc.gridx = 2;
        gbc.gridy = 7;
        panel.add(r2, gbc);
        gbc.gridx = 3;
        gbc.gridy = 7;
        panel.add(r0, gbc);
        frame.getContentPane().add(panel, BorderLayout.CENTER);
    }

    public void actionPerformed(ActionEvent e) {            // Calculator in general is meant to replicate the functionality of the Windows calculator
        String command = e.getActionCommand();
        if (command == "AC") {
            inputBox.setText("");
        } else if (command == "CE") {
            if (!inputBox.getText().isEmpty()) {
                inputBox.setText(inputBox.getText().substring(0, inputBox.getText().length() - 1));
            }
        } else if (command.charAt(0) == '=') {
            inputBox.setText(evaluate(inputBox.getText()));
        } else if (command == "√x") {
            inputBox.setText(sqrt(inputBox.getText()));
        } else if (command == "xy") {
            inputBox.setText(exp(inputBox.getText()));
        } else if (command == "R2") {
            inputBox.setText(round2(inputBox.getText()));
        } else if (command == "R0") {
            inputBox.setText(round0(inputBox.getText()));
        } else if (command == "m+" || command == "m-" || command == "mc" || command == "mr") {
            if (command == "mr") {
                inputBox.setText(String.valueOf(memory));
            } else if (command == "mc") {
                memory = 0;
            } else if (command == "m+" || command == "m-")
            {
                if (command == "m+") {
                    memory += memory(inputBox.getText());
                }
                else
                {
                    memory -= memory(inputBox.getText());
                }
            }
        } else if (command == "+/-") {
            inputBox.setText(plusOrNeg(inputBox.getText()));
        } else if (command.charAt(0) == '%') {
            inputBox.setText(percentage(inputBox.getText()));
        } else {
            inputBox.setText(inputBox.getText() + command);
        }
    }

    public static String evaluate(String expression) {

        if (expression.startsWith("="))
        {
            expression = expression.substring(1);
        }

        char[] arr = expression.toCharArray();
        String operand1 = "";
        String operand2 = "";
        String operator = "";
        double result = 0;
        double pi = 3.1415926536;
        String dotChecker = "";

        if (expression.isEmpty()) {
            return "=0.0";
        }

        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == '.') {
                dotChecker += arr[i];
            }
        }

        if (dotChecker.length() > 1) {
            return "ERROR!";
        }

        for (int i = 0; i < arr.length; i++)
        {
            if ((arr[i] == '-') && operand1.isEmpty() && operator.isEmpty())
            {
                operand1 += arr[i];
            }

            else if (arr[i] >= '0' && arr[i] <= '9' || arr[i] == '.' || arr[i] == 'π') {
                if (operator.isEmpty()) {
                    if (arr[i] == 'π') {
                        operand1 += pi;
                    } else {
                        operand1 += arr[i];

                    }
                } else {
                    if (arr[i] == 'π') {
                        operand2 += pi;
                    } else {
                        operand2 += arr[i];
                    }
                }
            }

            else if (arr[i] == '+' || arr[i] == '-' || arr[i] == 'x' || arr[i] == '÷')
            {
                if(operator.isEmpty())
                {
                    operator += String.valueOf(arr[i]);
                }
            }
        }

        if (operand2.isEmpty())
        {
            return operand1;
        }

        if (operator.equals("+"))
            result = (Double.parseDouble(operand1) + Double.parseDouble(operand2));
        else if (operator.equals("-"))
            result = (Double.parseDouble(operand1) - Double.parseDouble(operand2));
        else if (operator.equals("x"))
            result = (Double.parseDouble(operand1) * Double.parseDouble(operand2));
        else if (operator.equals("÷"))
            result = (Double.parseDouble(operand1) / Double.parseDouble(operand2));
        return "=" + result;
    }


    public static String sqrt(String expression) {
        char[] arr = expression.toCharArray();
        String operand1 = "";
        String operand2 = "";
        String operator = "";
        double result = 0;
        double operand2Converted = 0;
        double pi = 3.1415926536;
        String dotChecker = "";


        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == '.') {
                dotChecker += arr[i];
            }
        }

        if (expression.isEmpty())
        {
            return "ERROR!";
        }

        if (dotChecker.length() > 1) {
            return "ERROR!";
        }

        for (int i = 0; i < arr.length; i++)
        {
            if ((arr[i] == '-') && operand1.isEmpty() && operator.isEmpty())
            {
                operand1 += arr[i];
            }

            else if (arr[i] >= '0' && arr[i] <= '9' || arr[i] == '.' || arr[i] == 'π') {
                if (operator.isEmpty()) {
                    if (arr[i] == 'π') {
                        operand1 += pi;
                    } else {
                        operand1 += arr[i];

                    }
                } else {
                    if (arr[i] == 'π') {
                        operand2 += pi;
                    } else {
                        operand2 += arr[i];
                    }
                }
            }

            else if (arr[i] == '+' || arr[i] == '-' || arr[i] == 'x' || arr[i] == '÷')
            {
                if(operator.isEmpty())
                {
                    operator += String.valueOf(arr[i]);
                }
            }
        }

        if (operand2.isEmpty())
        {
            result = Math.sqrt(Double.parseDouble(operand1));
            return "=" + result;
        }

            operand2Converted = Math.sqrt(Double.parseDouble(operand2));
        if (operator.equals("+"))
            result = (Double.parseDouble(operand1) + operand2Converted);
        else if (operator.equals("-"))
            result = (Double.parseDouble(operand1) - operand2Converted);
        else if (operator.equals("x"))
            result = (Double.parseDouble(operand1) * operand2Converted);
        else if (operator.equals("÷"))
            result = (Double.parseDouble(operand1) / operand2Converted);
        return "=" + result;

    }


    public static String round0(String expression) {
        int index = expression.indexOf('=');

        if (index == -1 || index == expression.length() - 1) {
            return "=0";
        }

        String valuePart = expression.substring(index + 1);
        double value = Double.parseDouble(valuePart);

        String rounded = String.format("%.0f", value);
        return "=" + rounded;
    }


    public static String round2(String expression) {
        int index = expression.indexOf('=');

        if (index == -1 || index == expression.length() - 1) {
            return "=0";
        }

        String valuePart = expression.substring(index + 1);
        double value = Double.parseDouble(valuePart);

        String rounded = String.format("%.2f", value);
        return "=" + rounded;
    }

    public static String plusOrNeg(String expression) {
        if (expression.startsWith("="))
        {
            expression = expression.substring(1);
        }

        char[] arr = expression.toCharArray();
        String number = "";


        if (expression.isEmpty()) {
            return "ERROR!";
        }

        if (arr[0] == '-') {
            char[] newArr = new char[arr.length];
            for (int i = 0; i + 1 < arr.length; i++) {
                newArr[i] = arr[i + 1];
            }
            for (int i = 0; i < arr.length; i++) {
                number += newArr[i];
            }
            return number;
        } else {
            for (int i = 0; i < arr.length; i++) {
                if (arr[i] == '=') {

                }
            }

            char[] newArr = new char[arr.length + 1];
            newArr[0] = '-';

            for (int i = 0; i < arr.length; i++) {
                newArr[i + 1] = arr[i];
            }

            for (int i = 0; i < newArr.length; i++) {
                number += newArr[i];
            }
            return number;
        }


    }


    public static String percentage(String expression) {
        char[] arr = expression.toCharArray();
        String operand1 = "";
        String operand2 = "";
        String operator = "";
        String equalsSign = "";
        double operand2Converted = 0;
        double result = 0;
        double pi = 3.1415926536;

        for (int i = 0; i < arr.length; i++)
        {
            if (arr[i] == '=')
            {
                equalsSign += arr[i];
            }
        }

        for (int i = 0; i < arr.length; i++)
        {
            if ((arr[i] == '-') && operand1.isEmpty() && operator.isEmpty())
            {
                operand1 += arr[i];
            }

            else if (arr[i] >= '0' && arr[i] <= '9' || arr[i] == '.' || arr[i] == 'π') {
                if (operator.isEmpty()) {
                    if (arr[i] == 'π') {
                        operand1 += pi;
                    } else {
                        operand1 += arr[i];

                    }
                } else {
                    if (arr[i] == 'π') {
                        operand2 += pi;
                    } else {
                        operand2 += arr[i];
                    }
                }
            }

            else if (arr[i] == '+' || arr[i] == '-' || arr[i] == 'x' || arr[i] == '÷')
            {
                if(operator.isEmpty())
                {
                    operator += String.valueOf(arr[i]);
                }
            }
        }

        if (operand2.isEmpty() && equalsSign.isEmpty())
        {
            return "0";
        }

        if (!equalsSign.isEmpty() && equalsSign.charAt(0) == '=') {
            result = Double.parseDouble(operand1);
            result = result / 100.0;
            return "=" + result;
        } else {
            if (operator.equals("+"))
            {
                operand2Converted = Double.parseDouble(operand2) / 100.0;
                operand2Converted = operand2Converted * Double.parseDouble(operand1); // percent conversion
                result = (Double.parseDouble(operand1) + operand2Converted);
            }
            else if (operator.equals("-"))
            {
                operand2Converted = Double.parseDouble(operand2) / 100.0;
                operand2Converted = operand2Converted * Double.parseDouble(operand1); // percent conversion
                result = (Double.parseDouble(operand1) - operand2Converted);
            }
            else if (operator.equals("x"))
            {
                operand2Converted = Double.parseDouble(operand2) / 100.0;
                result = (Double.parseDouble(operand1) * operand2Converted);
            }
            else if (operator.equals("÷"))
            {
                operand2Converted = Double.parseDouble(operand2) / 100.0;
                result = (Double.parseDouble(operand1) / operand2Converted);
            }

            return "=" + result;
        }

    }

    public static String exp(String expression) {
        char[] arr = expression.toCharArray();
        String operand1 = "";
        String operand2 = "";
        String operator = "";
        String equalsSign = "";
        String exponent = "";
        double operand2Converted = 0;
        double result = 0;
        double pi = 3.1415926536;

        if (expression.isEmpty())
        {
            return "0";
        }

        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == '=') {
                equalsSign += arr[i];
            } else if (arr[i] >= '0' && arr[i] <= '9' || arr[i] == '.' || arr[i] == 'π') {
                if (operator.isEmpty()) {
                    if (arr[i] == 'π') {
                        operand1 += pi;
                    } else {
                        operand1 += arr[i];
                    }
                } else {
                    if (arr[i] == 'π') {
                        operand2 += pi;
                    } else {
                        operand2 += arr[i];
                    }
                }
            }

            if (arr[i] == '+' || arr[i] == '-' || arr[i] == 'x' || arr[i] == '÷')
            {
                operator += arr[i];
            }
        }

        if(operand2.isEmpty())
        {
            result = Double.parseDouble(operand1);
            result = Math.pow(result, 2.0);
            return "=" + result;
        }


        if (!equalsSign.isEmpty() && equalsSign.charAt(0) == '=') {
            for (int i = 0; i < arr.length; i++) {
                if (i + 1 == arr.length) {
                    exponent += arr[i];
                }
            }
            result = Double.parseDouble(operand1);
            result = Math.pow(result, 2.0);
            return "=" + result;
        } else {
            operand2Converted = Math.pow(Double.parseDouble(operand2), 2.0); // percent conversion
            if (operator.equals("+"))
                result = (Double.parseDouble(operand1) + operand2Converted);
            else if (operator.equals("-"))
                result = (Double.parseDouble(operand1) - operand2Converted);
            else if (operator.equals("x"))
                result = (Double.parseDouble(operand1) * operand2Converted);
            else if (operator.equals("÷"))
                result = (Double.parseDouble(operand1) / operand2Converted);

            return "=" + result;
        }
    }

    public static double memory(String expression) {
        char[] arr = expression.toCharArray();
        String number = "";
        String operator = "";
        String equalsSign = "";
        double result = 0;
        double pi = 3.1415926536;

        if (expression.isEmpty())
        {
            return 0;
        }

        for (int i = 0; i < arr.length; i++)
        {
            if (arr[i] == '=') {
                equalsSign += arr[i];
            }
            else if (arr[i] == '-')
            {
                number += arr[i];
            }
            else if (arr[i] >= '0' && arr[i] <= '9' || arr[i] == '.' || arr[i] == 'π')
            {
                    if (arr[i] == 'π')
                    {
                        number += pi;
                    }
                    else
                    {
                        number += arr[i];
                    }
            }
        }
        result = Double.parseDouble(number);
        return result;
    }
}