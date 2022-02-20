import java.lang.Integer;

public class JavaCheck
{
    // os.arch could contain: x86, i386, i686, amd64, x86_64, arm, aarch64
    private static final String[] keys = {"os.arch", "java.version", "java.vendor"};
    public static void main (String [] args)
    {
        int ret = 0;
        for(String key : keys)
        {
            String property = System.getProperty(key);
            if(property != null)
            {
                System.out.println(key + "=" + property);
            }
            else
            {
                ret = 1;
            }
        }
        
        System.exit(ret);
    }
}
