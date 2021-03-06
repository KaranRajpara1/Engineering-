/*
 * Game.java
 *
 * Created on 22 May, 2020, 2:37 AM
 */

package tictactoe;

import java.awt.Color;
import javax.swing.JOptionPane;

/**
 *
 * @author  KaranRajpara
 */
public class Game extends javax.swing.JFrame {
    static String player1Name="";
    static String player2Name="";
    static String turn=player1Name;
    static int score1=0;
    static int score2=0;
    /** Creates new form Game */
    public Game() {
        initComponents();
        this.setExtendedState(MAXIMIZED_BOTH);
       jLabel_player1Name.setText(player1Name);
       jLabel_player2Name.setText(player2Name);
       turn=player1Name;
       scoreDisplay();
       score1=0;
       score2=0;
    }
    
    /** This method is called from within the constructor to
     * initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is
     * always regenerated by the Form Editor.
     */
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jPanel2 = new javax.swing.JPanel();
        jPanel1 = new javax.swing.JPanel();
        jLabel_player1Name = new javax.swing.JLabel();
        jPanel3 = new javax.swing.JPanel();
        jLabel_player1Score = new javax.swing.JLabel();
        jPanel4 = new javax.swing.JPanel();
        jLabel_player2Name = new javax.swing.JLabel();
        jPanel5 = new javax.swing.JPanel();
        jLabel_player2Score = new javax.swing.JLabel();
        jButton_Back = new javax.swing.JButton();
        jButton_Reset = new javax.swing.JButton();
        jPanel7 = new javax.swing.JPanel();
        jPanel6 = new javax.swing.JPanel();
        jLabel3 = new javax.swing.JLabel();
        jPanel8 = new javax.swing.JPanel();
        jButton_00 = new javax.swing.JButton();
        jPanel9 = new javax.swing.JPanel();
        jButton_01 = new javax.swing.JButton();
        jPanel10 = new javax.swing.JPanel();
        jButton_02 = new javax.swing.JButton();
        jPanel13 = new javax.swing.JPanel();
        jButton_12 = new javax.swing.JButton();
        jPanel11 = new javax.swing.JPanel();
        jButton_10 = new javax.swing.JButton();
        jPanel12 = new javax.swing.JPanel();
        jButton_11 = new javax.swing.JButton();
        jPanel14 = new javax.swing.JPanel();
        jButton_20 = new javax.swing.JButton();
        jPanel15 = new javax.swing.JPanel();
        jButton_21 = new javax.swing.JButton();
        jPanel16 = new javax.swing.JPanel();
        jButton_22 = new javax.swing.JButton();
        jLabel1 = new javax.swing.JLabel();

        javax.swing.GroupLayout jPanel2Layout = new javax.swing.GroupLayout(jPanel2);
        jPanel2.setLayout(jPanel2Layout);
        jPanel2Layout.setHorizontalGroup(
            jPanel2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 100, Short.MAX_VALUE)
        );
        jPanel2Layout.setVerticalGroup(
            jPanel2Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 100, Short.MAX_VALUE)
        );

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        getContentPane().setLayout(null);

        jPanel1.setBorder(javax.swing.BorderFactory.createLineBorder(new java.awt.Color(0, 0, 0), 2));

        jLabel_player1Name.setFont(new java.awt.Font("Verdana", 0, 18));
        jLabel_player1Name.setHorizontalAlignment(javax.swing.SwingConstants.CENTER);

        javax.swing.GroupLayout jPanel1Layout = new javax.swing.GroupLayout(jPanel1);
        jPanel1.setLayout(jPanel1Layout);
        jPanel1Layout.setHorizontalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jLabel_player1Name, javax.swing.GroupLayout.DEFAULT_SIZE, 236, Short.MAX_VALUE)
        );
        jPanel1Layout.setVerticalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jLabel_player1Name, javax.swing.GroupLayout.DEFAULT_SIZE, 76, Short.MAX_VALUE)
        );

        getContentPane().add(jPanel1);
        jPanel1.setBounds(840, 210, 240, 80);

        jPanel3.setBorder(javax.swing.BorderFactory.createLineBorder(new java.awt.Color(0, 0, 0), 2));

        jLabel_player1Score.setFont(new java.awt.Font("Verdana", 0, 18));
        jLabel_player1Score.setHorizontalAlignment(javax.swing.SwingConstants.CENTER);

        javax.swing.GroupLayout jPanel3Layout = new javax.swing.GroupLayout(jPanel3);
        jPanel3.setLayout(jPanel3Layout);
        jPanel3Layout.setHorizontalGroup(
            jPanel3Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jLabel_player1Score, javax.swing.GroupLayout.DEFAULT_SIZE, 246, Short.MAX_VALUE)
        );
        jPanel3Layout.setVerticalGroup(
            jPanel3Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jLabel_player1Score, javax.swing.GroupLayout.DEFAULT_SIZE, 76, Short.MAX_VALUE)
        );

        getContentPane().add(jPanel3);
        jPanel3.setBounds(1080, 210, 250, 80);

        jPanel4.setBorder(javax.swing.BorderFactory.createLineBorder(new java.awt.Color(0, 0, 0), 2));

        jLabel_player2Name.setFont(new java.awt.Font("Verdana", 0, 18));
        jLabel_player2Name.setHorizontalAlignment(javax.swing.SwingConstants.CENTER);

        javax.swing.GroupLayout jPanel4Layout = new javax.swing.GroupLayout(jPanel4);
        jPanel4.setLayout(jPanel4Layout);
        jPanel4Layout.setHorizontalGroup(
            jPanel4Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jLabel_player2Name, javax.swing.GroupLayout.DEFAULT_SIZE, 236, Short.MAX_VALUE)
        );
        jPanel4Layout.setVerticalGroup(
            jPanel4Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jLabel_player2Name, javax.swing.GroupLayout.DEFAULT_SIZE, 76, Short.MAX_VALUE)
        );

        getContentPane().add(jPanel4);
        jPanel4.setBounds(840, 290, 240, 80);

        jPanel5.setBorder(javax.swing.BorderFactory.createLineBorder(new java.awt.Color(0, 0, 0), 2));

        jLabel_player2Score.setFont(new java.awt.Font("Verdana", 0, 18));
        jLabel_player2Score.setHorizontalAlignment(javax.swing.SwingConstants.CENTER);

        javax.swing.GroupLayout jPanel5Layout = new javax.swing.GroupLayout(jPanel5);
        jPanel5.setLayout(jPanel5Layout);
        jPanel5Layout.setHorizontalGroup(
            jPanel5Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel5Layout.createSequentialGroup()
                .addComponent(jLabel_player2Score, javax.swing.GroupLayout.PREFERRED_SIZE, 246, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
        );
        jPanel5Layout.setVerticalGroup(
            jPanel5Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel5Layout.createSequentialGroup()
                .addComponent(jLabel_player2Score, javax.swing.GroupLayout.PREFERRED_SIZE, 77, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
        );

        getContentPane().add(jPanel5);
        jPanel5.setBounds(1080, 290, 250, 80);

        jButton_Back.setBackground(new java.awt.Color(204, 0, 0));
        jButton_Back.setFont(new java.awt.Font("Times New Roman", 0, 24));
        jButton_Back.setText("Back");
        jButton_Back.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButton_BackActionPerformed(evt);
            }
        });
        getContentPane().add(jButton_Back);
        jButton_Back.setBounds(1170, 610, 120, 50);

        jButton_Reset.setBackground(new java.awt.Color(0, 204, 204));
        jButton_Reset.setFont(new java.awt.Font("Times New Roman", 0, 24));
        jButton_Reset.setText("Reset");
        jButton_Reset.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButton_ResetActionPerformed(evt);
            }
        });
        getContentPane().add(jButton_Reset);
        jButton_Reset.setBounds(1010, 610, 120, 50);

        jPanel7.setBackground(new java.awt.Color(153, 153, 0));

        jPanel6.setBackground(new java.awt.Color(102, 204, 255));
        jPanel6.setLayout(null);
        jPanel6.add(jLabel3);
        jLabel3.setBounds(0, 0, 0, 0);

        jPanel8.setBorder(javax.swing.BorderFactory.createLineBorder(new java.awt.Color(0, 0, 0), 2));
        jPanel8.setLayout(null);

        jButton_00.setFont(new java.awt.Font("Times New Roman", 1, 60));
        jButton_00.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButton_00ActionPerformed(evt);
            }
        });
        jPanel8.add(jButton_00);
        jButton_00.setBounds(0, 0, 150, 130);

        jPanel6.add(jPanel8);
        jPanel8.setBounds(100, 120, 150, 130);

        jPanel9.setBorder(javax.swing.BorderFactory.createLineBorder(new java.awt.Color(0, 0, 0), 2));
        jPanel9.setLayout(null);

        jButton_01.setFont(new java.awt.Font("Times New Roman", 1, 60));
        jButton_01.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButton_01ActionPerformed(evt);
            }
        });
        jPanel9.add(jButton_01);
        jButton_01.setBounds(0, 0, 150, 130);

        jPanel6.add(jPanel9);
        jPanel9.setBounds(250, 120, 150, 130);

        jPanel10.setBorder(javax.swing.BorderFactory.createLineBorder(new java.awt.Color(0, 0, 0), 2));
        jPanel10.setLayout(null);

        jButton_02.setFont(new java.awt.Font("Times New Roman", 1, 60));
        jButton_02.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButton_02ActionPerformed(evt);
            }
        });
        jPanel10.add(jButton_02);
        jButton_02.setBounds(0, 0, 150, 130);

        jPanel6.add(jPanel10);
        jPanel10.setBounds(400, 120, 150, 130);

        jPanel13.setBorder(javax.swing.BorderFactory.createLineBorder(new java.awt.Color(0, 0, 0), 2));
        jPanel13.setLayout(null);

        jButton_12.setFont(new java.awt.Font("Times New Roman", 1, 60));
        jButton_12.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButton_12ActionPerformed(evt);
            }
        });
        jPanel13.add(jButton_12);
        jButton_12.setBounds(0, 0, 150, 130);

        jPanel6.add(jPanel13);
        jPanel13.setBounds(400, 250, 150, 130);

        jPanel11.setBorder(javax.swing.BorderFactory.createLineBorder(new java.awt.Color(0, 0, 0), 2));
        jPanel11.setLayout(null);

        jButton_10.setFont(new java.awt.Font("Times New Roman", 1, 60));
        jButton_10.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButton_10ActionPerformed(evt);
            }
        });
        jPanel11.add(jButton_10);
        jButton_10.setBounds(0, 0, 150, 130);

        jPanel6.add(jPanel11);
        jPanel11.setBounds(100, 250, 150, 130);

        jPanel12.setBorder(javax.swing.BorderFactory.createLineBorder(new java.awt.Color(0, 0, 0), 2));
        jPanel12.setLayout(null);

        jButton_11.setFont(new java.awt.Font("Times New Roman", 1, 60));
        jButton_11.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButton_11ActionPerformed(evt);
            }
        });
        jPanel12.add(jButton_11);
        jButton_11.setBounds(0, 0, 150, 130);

        jPanel6.add(jPanel12);
        jPanel12.setBounds(250, 250, 150, 130);

        jPanel14.setBorder(javax.swing.BorderFactory.createLineBorder(new java.awt.Color(0, 0, 0), 2));
        jPanel14.setLayout(null);

        jButton_20.setFont(new java.awt.Font("Times New Roman", 1, 60));
        jButton_20.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButton_20ActionPerformed(evt);
            }
        });
        jPanel14.add(jButton_20);
        jButton_20.setBounds(0, 0, 150, 130);

        jPanel6.add(jPanel14);
        jPanel14.setBounds(100, 380, 150, 130);

        jPanel15.setBorder(javax.swing.BorderFactory.createLineBorder(new java.awt.Color(0, 0, 0), 2));
        jPanel15.setLayout(null);

        jButton_21.setFont(new java.awt.Font("Times New Roman", 1, 60));
        jButton_21.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButton_21ActionPerformed(evt);
            }
        });
        jPanel15.add(jButton_21);
        jButton_21.setBounds(0, 0, 150, 130);

        jPanel6.add(jPanel15);
        jPanel15.setBounds(250, 380, 150, 130);

        jPanel16.setBorder(javax.swing.BorderFactory.createLineBorder(new java.awt.Color(0, 0, 0), 2));
        jPanel16.setLayout(null);

        jButton_22.setFont(new java.awt.Font("Times New Roman", 1, 60));
        jButton_22.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButton_22ActionPerformed(evt);
            }
        });
        jPanel16.add(jButton_22);
        jButton_22.setBounds(0, 0, 150, 130);

        jPanel6.add(jPanel16);
        jPanel16.setBounds(400, 380, 150, 130);

        jLabel1.setFont(new java.awt.Font("Algerian", 0, 48));
        jLabel1.setForeground(new java.awt.Color(153, 0, 153));
        jLabel1.setText("Tic Tac Toe");

        javax.swing.GroupLayout jPanel7Layout = new javax.swing.GroupLayout(jPanel7);
        jPanel7.setLayout(jPanel7Layout);
        jPanel7Layout.setHorizontalGroup(
            jPanel7Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel7Layout.createSequentialGroup()
                .addGap(47, 47, 47)
                .addComponent(jPanel6, javax.swing.GroupLayout.PREFERRED_SIZE, 685, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(206, 206, 206)
                .addComponent(jLabel1)
                .addContainerGap(157, Short.MAX_VALUE))
        );
        jPanel7Layout.setVerticalGroup(
            jPanel7Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel7Layout.createSequentialGroup()
                .addGap(69, 69, 69)
                .addGroup(jPanel7Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(jPanel6, javax.swing.GroupLayout.PREFERRED_SIZE, 573, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jLabel1))
                .addContainerGap(98, Short.MAX_VALUE))
        );

        getContentPane().add(jPanel7);
        jPanel7.setBounds(0, 0, 1370, 740);

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void jButton_BackActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton_BackActionPerformed
        // TODO add your handling code here:
        new MenuPage().setVisible(true);
        this.setVisible(false);
    }//GEN-LAST:event_jButton_BackActionPerformed

    private void jButton_00ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton_00ActionPerformed
        // TODO add your handling code here:
        
        if(jButton_00.getText().equals("")){
        if(turn.equals(player1Name)){
            jButton_00.setText("X");
            jButton_00.setForeground(Color.GREEN);
            turn=player2Name;
            logic(player1Name);
            scoreDisplay();
        }
        else{
            jButton_00.setText("O");
            jButton_00.setForeground(Color.RED);
            turn=player1Name;
            logic(player2Name);
            scoreDisplay();
        }
      }
    }//GEN-LAST:event_jButton_00ActionPerformed

    private void jButton_01ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton_01ActionPerformed
        // TODO add your handling code here:
        if(jButton_01.getText().equals("")){
        if(turn.equals(player1Name)){
            jButton_01.setText("X");
            jButton_01.setForeground(Color.GREEN);
            turn=player2Name;
            logic(player1Name);
            scoreDisplay();
        }
        else{
            jButton_01.setText("O");
            jButton_01.setForeground(Color.RED);
            turn=player1Name;
            logic(player2Name);
            scoreDisplay();
        }
        }
    }//GEN-LAST:event_jButton_01ActionPerformed

    private void jButton_02ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton_02ActionPerformed
        // TODO add your handling code here:
        if(jButton_02.getText().equals("")){
        if(turn.equals(player1Name)){
            jButton_02.setText("X");
            jButton_02.setForeground(Color.GREEN);
            turn=player2Name;
            logic(player1Name);
            scoreDisplay();
        }
        else{
            jButton_02.setText("O");
            jButton_02.setForeground(Color.RED);
            turn=player1Name;
            logic(player2Name);
            scoreDisplay();
        }
        }
    }//GEN-LAST:event_jButton_02ActionPerformed

    private void jButton_10ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton_10ActionPerformed
        // TODO add your handling code here:
        if(jButton_10.getText().equals("")){
        if(turn.equals(player1Name)){
            jButton_10.setText("X");
            jButton_10.setForeground(Color.GREEN);
            turn=player2Name;
            logic(player1Name);
            scoreDisplay();
        }
        else{
            jButton_10.setText("O");
            jButton_10.setForeground(Color.RED);
            turn=player1Name;
            logic(player2Name);
            scoreDisplay();
        }
        }
    }//GEN-LAST:event_jButton_10ActionPerformed

    private void jButton_11ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton_11ActionPerformed
        // TODO add your handling code here:
        if(jButton_11.getText().equals("")){
        if(turn.equals(player1Name)){
            jButton_11.setText("X");
            jButton_11.setForeground(Color.GREEN);
            turn=player2Name;
            logic(player1Name);
            scoreDisplay();
        }
        else{
            jButton_11.setText("O");
            jButton_11.setForeground(Color.RED);
            turn=player1Name;
            logic(player2Name);
            scoreDisplay();
        }
        }
    }//GEN-LAST:event_jButton_11ActionPerformed

    private void jButton_12ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton_12ActionPerformed
        // TODO add your handling code here:
        if(jButton_12.getText().equals("")){
        if(turn.equals(player1Name)){
            jButton_12.setText("X");
            jButton_12.setForeground(Color.GREEN);
            turn=player2Name;
            logic(player1Name);
            scoreDisplay();
        }
        else{
            jButton_12.setText("O");
            jButton_12.setForeground(Color.RED);
            turn=player1Name;
            logic(player2Name);
            scoreDisplay();
        }
        }
    }//GEN-LAST:event_jButton_12ActionPerformed

    private void jButton_20ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton_20ActionPerformed
        // TODO add your handling code here:
        if(jButton_20.getText().equals("")){
        if(turn.equals(player1Name)){
            jButton_20.setText("X");
            jButton_20.setForeground(Color.GREEN);
            turn=player2Name;
            logic(player1Name);
            scoreDisplay();
        }
        else{
            jButton_20.setText("O");
            jButton_20.setForeground(Color.RED);
            turn=player1Name;
            logic(player2Name);
            scoreDisplay();
        }
        }
    }//GEN-LAST:event_jButton_20ActionPerformed

    private void jButton_21ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton_21ActionPerformed
        // TODO add your handling code here:
        if(jButton_21.getText().equals("")){
        if(turn.equals(player1Name)){
            jButton_21.setText("X");
            jButton_21.setForeground(Color.GREEN);
            turn=player1Name;
            logic(player1Name);
            scoreDisplay();
        }
        else{
            jButton_21.setText("O");
            jButton_21.setForeground(Color.RED);
            turn=player1Name;
            logic(player2Name);
            scoreDisplay();
        }
        }
    }//GEN-LAST:event_jButton_21ActionPerformed

    private void jButton_22ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton_22ActionPerformed
        // TODO add your handling code here:
        if(jButton_22.getText().equals("")){
        if(turn.equals(player1Name)){
            jButton_22.setText("X");
            jButton_22.setForeground(Color.GREEN);
            turn=player2Name;
            logic(player1Name);
            scoreDisplay();
        }
        else{
            jButton_22.setText("O");
            jButton_22.setForeground(Color.RED);
            turn=player1Name;
            logic(player2Name);
            scoreDisplay();
        }
        }
    }//GEN-LAST:event_jButton_22ActionPerformed

    private void jButton_ResetActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton_ResetActionPerformed
        // TODO add your handling code here:
        
        score1=0;
        score2=0;
        jLabel_player1Score.setText(Integer.toString(score1));
        jLabel_player2Score.setText(Integer.toString(score2));
        jButton_00.setText("");
            jButton_01.setText("");
            jButton_02.setText("");
            jButton_10.setText("");
            jButton_11.setText("");
            jButton_12.setText("");
            jButton_20.setText("");
            jButton_21.setText("");
            jButton_22.setText("");
            turn=player1Name;
    }//GEN-LAST:event_jButton_ResetActionPerformed
    
    /**
     * @param args the command line arguments
     */
    public void logic(String str){
        String karan00=jButton_00.getText();
        String karan01=jButton_01.getText();
        String karan02=jButton_02.getText();
        String karan10=jButton_10.getText();
        String karan11=jButton_11.getText();
        String karan12=jButton_12.getText();
        String karan20=jButton_20.getText();
        String karan21=jButton_21.getText();
        String karan22=jButton_22.getText();
        
       /* if(karan00.equals("") || karan01.equals("") || karan02.equals("") || karan10.equals("") || karan11.equals("") || karan12.equals("") || karan20.equals("") || karan21.equals("") || karan22.equals("")){
            
        }*/
        if(!"".equals(karan00) && !"".equals(karan01) && !"".equals(karan02)){
            if(karan00.equals(karan01) && karan00.equals(karan02)){
            JOptionPane.showMessageDialog(this,"Congratulations !!\n"+str+" Won");
            jButton_00.setText("");
            jButton_01.setText("");
            jButton_02.setText("");
            jButton_10.setText("");
            jButton_11.setText("");
            jButton_12.setText("");
            jButton_20.setText("");
            jButton_21.setText("");
            jButton_22.setText("");
            if(str.equals(player1Name)){
                score1++;
                turn=player1Name;
            }
            else{
                score2++;
                turn=player1Name;
            }
        }
        }
        
        if(!"".equals(karan10) && !"".equals(karan11) && !"".equals(karan12)){
        if(karan10.equals(karan11) && karan10.equals(karan12)){
            JOptionPane.showMessageDialog(this,"Congratulations !!\n"+str+" Won");
            jButton_00.setText("");
            jButton_01.setText("");
            jButton_02.setText("");
            jButton_10.setText("");
            jButton_11.setText("");
            jButton_12.setText("");
            jButton_20.setText("");
            jButton_21.setText("");
            jButton_22.setText("");
            if(str.equals(player1Name)){
                score1++;
                turn=player1Name;
            }
            else{
                score2++;
                turn=player1Name;
            }
        }
        }
        
        if(!"".equals(karan20) && !"".equals(karan21) && !"".equals(karan22)){
        if(karan20.equals(karan21) && karan20.equals(karan22)){
            JOptionPane.showMessageDialog(this,"Congratulations !!\n"+str+" Won");
            jButton_00.setText("");
            jButton_01.setText("");
            jButton_02.setText("");
            jButton_10.setText("");
            jButton_11.setText("");
            jButton_12.setText("");
            jButton_20.setText("");
            jButton_21.setText("");
            jButton_22.setText("");
            if(str.equals(player1Name)){
                score1++;
                turn=player1Name;
            }
            else{
                score2++;
                turn=player1Name;
            }
        }
        }
        
        if(!"".equals(karan10) && !"".equals(karan00) && !"".equals(karan20)){
        if(karan00.equals(karan10) && karan00.equals(karan20)){
            JOptionPane.showMessageDialog(this,"Congratulations !!\n"+str+" Won");
            jButton_00.setText("");
            jButton_01.setText("");
            jButton_02.setText("");
            jButton_10.setText("");
            jButton_11.setText("");
            jButton_12.setText("");
            jButton_20.setText("");
            jButton_21.setText("");
            jButton_22.setText("");
            if(str.equals(player1Name)){
                score1++;
                turn=player1Name;
            }
            else{
                score2++;
                turn=player1Name;
            }
        }
        }
        
        if(!"".equals(karan01) && !"".equals(karan11) && !"".equals(karan21)){
        if(karan01.equals(karan11) && karan01.equals(karan21)){
            JOptionPane.showMessageDialog(this,"Congratulations !!\n"+str+" Won");
            jButton_00.setText("");
            jButton_01.setText("");
            jButton_02.setText("");
            jButton_10.setText("");
            jButton_11.setText("");
            jButton_12.setText("");
            jButton_20.setText("");
            jButton_21.setText("");
            jButton_22.setText("");
            if(str.equals(player1Name)){
                score1++;
                turn=player1Name;
            }
            else{
                score2++;
                turn=player1Name;
            }
        }
        }
        
        if(!"".equals(karan02) && !"".equals(karan12) && !"".equals(karan22)){
        if(karan02.equals(karan12) && karan02.equals(karan22)){
            JOptionPane.showMessageDialog(this,"Congratulations !!\n"+str+" Won");
            jButton_00.setText("");
            jButton_01.setText("");
            jButton_02.setText("");
            jButton_10.setText("");
            jButton_11.setText("");
            jButton_12.setText("");
            jButton_20.setText("");
            jButton_21.setText("");
            jButton_22.setText("");
            if(str.equals(player1Name)){
                score1++;
                turn=player1Name;
            }
            else{
                score2++;
                turn=player1Name;
            }
        }
        }
        
        if(!"".equals(karan11) && !"".equals(karan00) && !"".equals(karan22)){
        if(karan00.equals(karan11) && karan00.equals(karan22)){
            JOptionPane.showMessageDialog(this,"Congratulations !!\n"+str+" Won");
            jButton_00.setText("");
            jButton_01.setText("");
            jButton_02.setText("");
            jButton_10.setText("");
            jButton_11.setText("");
            jButton_12.setText("");
            jButton_20.setText("");
            jButton_21.setText("");
            jButton_22.setText("");
            if(str.equals(player1Name)){
                score1++;
                turn=player1Name;
            }
            else{
                score2++;
                turn=player1Name;
            }
        }
        }
        
        if(!"".equals(karan02) && !"".equals(karan11) && !"".equals(karan20)){
        if(karan02.equals(karan11) && karan02.equals(karan20)){
            JOptionPane.showMessageDialog(this,"Congratulations !!\n"+str+" Won");
            jButton_00.setText("");
            jButton_01.setText("");
            jButton_02.setText("");
            jButton_10.setText("");
            jButton_11.setText("");
            jButton_12.setText("");
            jButton_20.setText("");
            jButton_21.setText("");
            jButton_22.setText("");
            if(str.equals(player1Name)){
                score1++;
                turn=player1Name;
            }
            else{
                score2++;
                turn=player1Name;
            }
        }
        }
        
        if(!"".equals(karan00) && !"".equals(karan01) && !"".equals(karan02) && !"".equals(karan10) && !"".equals(karan11) && !"".equals(karan12) && !"".equals(karan20) && !"".equals(karan21) && !"".equals(karan22) ){
            JOptionPane.showMessageDialog(this, "GAME DRAW !!!!");
             jButton_00.setText("");
            jButton_01.setText("");
            jButton_02.setText("");
            jButton_10.setText("");
            jButton_11.setText("");
            jButton_12.setText("");
            jButton_20.setText("");
            jButton_21.setText("");
            jButton_22.setText("");
            turn=player1Name;
        }
    }
    
    public void displayName(String p1,String p2)
    {
        this.player1Name=p1;
        this.player2Name=p2;
       
    }
    
    public void scoreDisplay(){
        jLabel_player1Score.setText(Integer.toString(score1));
        jLabel_player2Score.setText(Integer.toString(score2));
    }
    public static void main(String args[]) {
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new Game().setVisible(true);
            }
        });
    }
    
    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton jButton_00;
    private javax.swing.JButton jButton_01;
    private javax.swing.JButton jButton_02;
    private javax.swing.JButton jButton_10;
    private javax.swing.JButton jButton_11;
    private javax.swing.JButton jButton_12;
    private javax.swing.JButton jButton_20;
    private javax.swing.JButton jButton_21;
    private javax.swing.JButton jButton_22;
    private javax.swing.JButton jButton_Back;
    private javax.swing.JButton jButton_Reset;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel3;
    private javax.swing.JLabel jLabel_player1Name;
    private javax.swing.JLabel jLabel_player1Score;
    private javax.swing.JLabel jLabel_player2Name;
    private javax.swing.JLabel jLabel_player2Score;
    private javax.swing.JPanel jPanel1;
    private javax.swing.JPanel jPanel10;
    private javax.swing.JPanel jPanel11;
    private javax.swing.JPanel jPanel12;
    private javax.swing.JPanel jPanel13;
    private javax.swing.JPanel jPanel14;
    private javax.swing.JPanel jPanel15;
    private javax.swing.JPanel jPanel16;
    private javax.swing.JPanel jPanel2;
    private javax.swing.JPanel jPanel3;
    private javax.swing.JPanel jPanel4;
    private javax.swing.JPanel jPanel5;
    private javax.swing.JPanel jPanel6;
    private javax.swing.JPanel jPanel7;
    private javax.swing.JPanel jPanel8;
    private javax.swing.JPanel jPanel9;
    // End of variables declaration//GEN-END:variables
    
}
