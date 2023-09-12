import java.sql.*;

public class EmployeeDB{
    public static void main(String[] args) {
        Connection conn = null;
        try {
            Class.forName("com.mysql.cj.jdbc.Driver");
            conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/db", "gct", "password");
            PreparedStatement stmt = conn.prepareStatement("delete from employee");
            stmt = conn.prepareStatement("INSERT INTO employee VALUES(?,?,?)");
            stmt.setInt(1, 1);
            stmt.setString(2, "Aswanth");
            stmt.setInt(3, 300000);
            stmt.executeUpdate();
            System.out.println("DATA INSERTED");
            ResultSet rs = conn.prepareStatement("select * from employee").executeQuery();
            while (rs.next()) {
                System.out.println("ID: " + rs.getInt("id")+", NAME: "+rs.getString("name")+", SALARY: "+rs.getInt("salary"));
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
