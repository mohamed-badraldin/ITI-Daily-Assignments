<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform"
    xmlns:xs="http://www.w3.org/2001/XMLSchema"
    exclude-result-prefixes="xs"
    version="2.0">
    
    <xsl:template match="/books">
        <html>
            <body>
                <h1>A list of books</h1>
                <table border="3" width="600">
                    <xsl:for-each select="book">
                    <tr>
                        <td><xsl:value-of select="position()"/></td>
                        <td><xsl:value-of select="author"/></td>
                        <td><xsl:value-of select="title"/></td>
                        <td><xsl:value-of select="price"/></td>
                    </tr>
                    </xsl:for-each>
                </table>
            </body>
        </html>
    </xsl:template>
    
</xsl:stylesheet>