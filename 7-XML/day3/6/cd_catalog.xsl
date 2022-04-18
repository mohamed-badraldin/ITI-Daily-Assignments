<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform"
    xmlns:xs="http://www.w3.org/2001/XMLSchema"
    exclude-result-prefixes="xs"
    version="2.0">
    
    <xsl:template match="/">
        <h2>My CD Collection</h2>
        <table border="2" width="400">
            <tr bgcolor="#9acd32">
                <th>Title</th>
                <th>Artist</th>
            </tr>
            <xsl:for-each select="//CD">
                 <tr>
                    <td><xsl:value-of select="TITLE"/></td>
                    <xsl:choose>
                        <xsl:when test="PRICE &gt; 10">
                            <td bgcolor="red"><xsl:value-of select="ARTIST"/></td>  
                        </xsl:when> 
                        <xsl:otherwise>
                            <td bgcolor="green"><xsl:value-of select="ARTIST"/></td>
                        </xsl:otherwise>
                    </xsl:choose>   
                </tr>
            </xsl:for-each>
        </table>
    </xsl:template>
    
</xsl:stylesheet>