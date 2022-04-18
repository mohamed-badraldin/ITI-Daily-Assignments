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
                <th>Price</th>
            </tr>
            <xsl:for-each select="//CD">
                <xsl:sort select="PRICE" order="descending" data-type="number"></xsl:sort>
                    <tr>
                        <td><xsl:value-of select="TITLE"/></td>
                        <td><xsl:value-of select="ARTIST"/></td>
                        <td><xsl:value-of select="PRICE"/></td>
                    </tr>
            </xsl:for-each>
        </table>
    </xsl:template>
    
</xsl:stylesheet>