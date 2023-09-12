// JDBC program to insert, Delete and Update records into Employee table. 

import java.sql.*;

public class EmployeeDB {
    public static void main(String[] args) {
        Connection conn = null;
        try {
            Class.forName("com.mysql.cj.jdbc.Driver");
            conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/db", "gct", "password");
            PreparedStatement stmt = conn.prepareStatement("delete from employee");
            stmt.executeUpdate();
            stmt = conn.prepareStatement("INSERT INTO employee VALUES(?,?,?)");
            stmt.setInt(1, 1);
            stmt.setString(2, "Aswanth");
            stmt.setInt(3, 300000);
            stmt.executeUpdate();
            stmt.setInt(1, 2);
            stmt.setString(2, "Amaan");
            stmt.setInt(3, 340000);
            stmt.executeUpdate();
            stmt.setInt(1, 3);
            stmt.setString(2, "Savin");
            stmt.setInt(3, 340050);
            stmt.executeUpdate();
            System.out.println(
                    "-------------------------------------------------------------\n * DATA INSERTED\n-------------------------------------------------------------");
            printAll(conn);
            stmt = conn.prepareStatement("delete from employee where id=?");
            stmt.setInt(1, 2);
            stmt.executeUpdate();
            System.out.println(
                    "-------------------------------------------------------------\n * 2ND RECORD DELETED\n-------------------------------------------------------------");
            printAll(conn);

            stmt = conn.prepareStatement("update employee set salary=500000 where id=1");
            stmt.executeUpdate();
            System.out.println(
                    "-------------------------------------------------------------\n * UPDATED SALARY OF 1ST RECORD\n-------------------------------------------------------------");
            printAll(conn);

        } catch (Exception e) {
            e.printStackTrace();
        }

    }

    public static void printAll(Connection conn) throws SQLException {
        ResultSet rs = conn.prepareStatement("select * from employee").executeQuery();
        while (rs.next()) {
            System.out.println(
                    "ID: " + rs.getInt("id") + ", NAME: " + rs.getString("name") + ", SALARY: " + rs.getInt("salary"));
        }
    }
}
