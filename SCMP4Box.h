/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:36 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SCMP4Box : NSObject {

	NSString* _type;

}

@property (nonatomic,copy,readonly) NSString * type;              //@synthesize type=_type - In the implementation block
+(void)writeHeaderOfSize:(unsigned long long)arg1 type:(id)arg2 toFile:(id)arg3 ;
+(BOOL)readHeaderSize:(unsigned long long*)arg1 type:(id*)arg2 fromFile:(id)arg3 error:(id*)arg4 ;
+(BOOL)isCompositionBox:(id)arg1 ;
+(id)mp4BoxFromFileHandle:(id)arg1 atOffset:(unsigned long long)arg2 error:(id*)arg3 ;
-(unsigned long long)size;
-(NSString *)type;
-(id)initWithType:(id)arg1 ;
-(void)writeToFile:(id)arg1 ;
@end

