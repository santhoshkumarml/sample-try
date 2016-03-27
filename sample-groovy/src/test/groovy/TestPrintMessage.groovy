import org.junit.Test;
public class TestPrintMessage{
    @Test
    public void testPrinter() throws Exception {
        def msg = 'aslksahdlkjsahdlkjsa'
        PrintMessage printer = new PrintMessage(msg)
        printer.printMsg()
    }
}