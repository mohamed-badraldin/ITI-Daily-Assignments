<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform"
    xmlns:xs="http://www.w3.org/2001/XMLSchema"
    exclude-result-prefixes="xs"
    version="2.0">
    
   <xsl:template match="/">
        <xsl:text>Review of 3.5 =  </xsl:text> 
        <xsl:value-of select="count(/books/book/review[. = 3.5])"/>
       <br/>
       <xsl:text>Review of 4 =  </xsl:text> 
       <xsl:value-of select="count(/books/book/review[. = 4])"/>
   </xsl:template> 
   
</xsl:stylesheet>