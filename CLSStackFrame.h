/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CLSStackFrame : NSObject {

	unsigned _lineNumber;
	NSString* _symbol;
	NSString* _rawSymbol;
	NSString* _library;
	NSString* _fileName;
	unsigned long long _offset;
	unsigned long long _address;

}

@property (nonatomic,copy) NSString * symbol;                         //@synthesize symbol=_symbol - In the implementation block
@property (nonatomic,copy) NSString * rawSymbol;                      //@synthesize rawSymbol=_rawSymbol - In the implementation block
@property (nonatomic,copy) NSString * library;                        //@synthesize library=_library - In the implementation block
@property (nonatomic,copy) NSString * fileName;                       //@synthesize fileName=_fileName - In the implementation block
@property (assign,nonatomic) unsigned lineNumber;                     //@synthesize lineNumber=_lineNumber - In the implementation block
@property (assign,nonatomic) unsigned long long offset;               //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) unsigned long long address;              //@synthesize address=_address - In the implementation block
+(id)stackFrameWithAddress:(unsigned long long)arg1 ;
+(id)stackFrame;
+(id)stackFrameWithSymbol:(id)arg1 ;
-(NSString *)rawSymbol;
-(void)setRawSymbol:(NSString *)arg1 ;
-(unsigned)lineNumber;
-(id)description;
-(void)setOffset:(unsigned long long)arg1 ;
-(unsigned long long)offset;
-(NSString *)symbol;
-(void)setSymbol:(NSString *)arg1 ;
-(void)setAddress:(unsigned long long)arg1 ;
-(NSString *)library;
-(void)setLibrary:(NSString *)arg1 ;
-(void)setLineNumber:(unsigned)arg1 ;
-(unsigned long long)address;
-(NSString *)fileName;
-(void)setFileName:(NSString *)arg1 ;
@end

