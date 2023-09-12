
// JDBC program to connect to Student table. Implement the record scrolling
// functions – first(), last(), next(), previous(), beforeFirst(), afterLast(),
// absolute() and relative().
import java.sql.*;

public class Student {
    public static void main(String[] args) {
        try {
            Class.forName("com.mysql.cj.jdbc.Driver");
        } catch (ClassNotFoundException e) {
            e.printStackTrace();
        }
        try {
            Connection conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/db", "gct", "password");
            System.out.println("* Connection: " + conn);
            PreparedStatement stmt = conn.prepareStatement("drop table if exists student");
            stmt.executeUpdate();
            stmt = conn.prepareStatement("CREATE TABLE student(id int,name varchar(255), gender varchar(5))");
            stmt.executeUpdate();
            stmt = conn.prepareStatement("INSERT INTO student (id,name,gender) VALUES(?,?,?)");
            stmt.setInt(1, 1);
            stmt.setString(2, "Aswanth");
            stmt.setString(3, "male");
            stmt.executeUpdate();
            stmt.setInt(1, 2);
            stmt.setString(2, "Amaan");
            stmt.setString(3, "male");
            stmt.executeUpdate();
            stmt.setInt(1, 3);
            stmt.setString(2, "Savin");
            stmt.setString(3, "male");
            stmt.executeUpdate();
            System.out.println(" * INSERTED 3 Records");
            stmt = conn.prepareStatement("SELECT * FROM student",
                    ResultSet.TYPE_SCROLL_INSENSITIVE, ResultSet.CONCUR_READ_ONLY);
            ResultSet rs = stmt.executeQuery();
            System.out.println(" * Going to first entity");
            rs.first();
            printCur(rs);
            System.out.println(" * Going to next entity");
            rs.next();
            printCur(rs);
            System.out.println(" * Going to last entity");
            rs.last();
            printCur(rs);
            System.out.println(" * Going to previous entity");
            rs.previous();
            printCur(rs);
            System.out.println(" * Going to before first entity, and printing all entity");
            rs.beforeFirst();
            while (rs.next()) {
                printCur(rs);
            }

            System.out.println(" * Going to after last entity, and printing all entity (reverse)");
            rs.afterLast();
            while (rs.previous()) {
                printCur(rs);
            }

            System.out.println(" * Going to 2nd entity using absolute()");
            rs.absolute(2);
            printCur(rs);

            System.out.println(" * Going to -1 relativey");
            rs.relative(-1);
            printCur(rs);
        } catch (SQLException e) {
            e.printStackTrace();
        }
    }

    public static void printCur(ResultSet rs) throws SQLException {
        System.out.println(
                "ID : " + rs.getInt("id") + ", NAME : " + rs.getString("name") + ", GENDER: " + rs.getString("gender"));
    }
}
