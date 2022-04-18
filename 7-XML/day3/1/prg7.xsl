<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform"
    xmlns:xs="http://www.w3.org/2001/XMLSchema"
    exclude-result-prefixes="xs"
    version="2.0">
    
    <xsl:template match="/">
        <html>
            <body>
                <xsl:for-each select="xslTutorial/SECTION">              
                 <xsl:choose>
                     
                     <xsl:when test="SUMMARY">
                         <p><xsl:value-of select="/xslTutorial/SECTION/SUMMARY"/></p>
                     </xsl:when>
                     
                     <xsl:otherwise>
                         <p><xsl:value-of select="DATA[1]"/></p>
                         <p><xsl:value-of select="DATA[2]"/></p>
                     </xsl:otherwise>
                     
                 </xsl:choose>    
                </xsl:for-each>
            </body>
        </html>
    </xsl:template>
</xsl:stylesheet>