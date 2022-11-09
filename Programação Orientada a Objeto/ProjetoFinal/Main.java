package Swing;

import javax.swing.*;
import javax.swing.border.LineBorder;
import javax.swing.border.TitledBorder;
import java.awt.*;
import java.awt.event.KeyAdapter;
import java.awt.event.KeyEvent;

public class Main extends JFrame {
    drawScreen() {
        super("Aprendendo a digitar");

        JPanel mainPanel = new JPanel(new BorderLayout());
        JPanel visor = new JPanel(new BorderLayout());
        JPanel keyboard = new JPanel(new GridLayout(3, 10, 3, 3));

        mainPanel.add(visor, BorderLayout.NORTH);
        mainPanel.add(keyboard, BorderLayout.SOUTH);



        JLabel lq = new JLabel("Q");
        lq.setFont(new Font("Arial", Font.PLAIN, 30));
        keyboard.add(lq);

        JLabel lw = new JLabel("W");
        keyboard.add(lw);

        JLabel lr = new JLabel("R");
        keyboard.add(lr);

        JLabel lt = new JLabel("T");
        keyboard.add(lt);

        JLabel ly = new JLabel("Y");
        keyboard.add(ly);

        JLabel lu = new JLabel("U");
        keyboard.add(lu);

        JLabel li = new JLabel("I");
        keyboard.add(li);

        JLabel lo = new JLabel("O");
        keyboard.add(lo);

        JLabel lp = new JLabel("P");
        keyboard.add(lp);

        JLabel la = new JLabel("A");
        la.setFont(new Font("Arial", Font.PLAIN, 30));
        keyboard.add(la);

        JLabel ls = new JLabel("S");
        ls.setFont(new Font("Arial", Font.PLAIN, 30));
        keyboard.add(ls);

        JLabel ld = new JLabel("D");
        ld.setFont(new Font("Arial", Font.PLAIN, 30));
        keyboard.add(ld);

        JLabel lf = new JLabel("F");
        lf.setFont(new Font("Arial", Font.PLAIN, 30));
        keyboard.add(lf);

        JLabel lg = new JLabel("G");
        lg.setFont(new Font("Arial", Font.PLAIN, 30));
        keyboard.add(lg);

        JLabel lh = new JLabel("H");
        lh.setFont(new Font("Arial", Font.PLAIN, 30));
        keyboard.add(lh);

        JLabel lj = new JLabel("J");
        lj.setFont(new Font("Arial", Font.PLAIN, 30));
        keyboard.add(lj);

        JLabel lk = new JLabel("K");
        lk.setFont(new Font("Arial", Font.PLAIN, 30));
        keyboard.add(lk);

        JLabel ll = new JLabel("L");
        ll.setFont(new Font("Arial", Font.PLAIN, 30));
        keyboard.add(ll);

        JLabel lcdilha = new JLabel("Ç");
        lcdilha.setFont(new Font("Arial", Font.PLAIN, 30));
        keyboard.add(lcdilha);

        JLabel lz = new JLabel("Z");
        lz.setFont(new Font("Arial", Font.PLAIN, 30));
        keyboard.add(lz);

        JLabel lx = new JLabel("X");
        lx.setFont(new Font("Arial", Font.PLAIN, 30));
        keyboard.add(lx);

        JLabel lc = new JLabel("X");
        lc.setFont(new Font("Arial", Font.PLAIN, 30));
        keyboard.add(lc);

        JLabel lv = new JLabel("V");
        lv.setFont(new Font("Arial", Font.PLAIN, 30));
        keyboard.add(lv);

        JLabel lb = new JLabel("B");
        lb.setFont(new Font("Arial", Font.PLAIN, 30));
        keyboard.add(lb);

        JLabel ln = new JLabel("N");
        ln.setFont(new Font("Arial", Font.PLAIN, 30));
        keyboard.add(ln);

        JLabel lm = new JLabel("M");
        lm.setFont(new Font("Arial", Font.PLAIN, 30));
        keyboard.add(lm);

        

        JTextField textField = new JTextField(20);
        textField.addKeyListener(new MKeyListener());
        textField.setBorder(new LineBorder(Color.BLACK));
        visor.add(textField, BorderLayout.CENTER);


        getContentPane().add(mainPanel);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setSize(500, 500);
        setVisible(true);
    }

    public static void main(String [] args){
        new drawScreen();
    }
}
class MKeyListener extends KeyAdapter {

    @Override
    public void keyPressed(KeyEvent event) {
        char ch = event.getKeyChar();
            System.out.println(event.getKeyChar());

        if (event.getKeyCode() == KeyEvent.VK_HOME) {
            System.out.println("Key codes: " + event.getKeyCode());
        }
    }
}


