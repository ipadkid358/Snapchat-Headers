/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:36 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCMP4Box.h>

@class NSData;

@interface SCMP4DataBackedBox : SCMP4Box {

	NSData* _data;

}

@property (nonatomic,copy) NSData * data;              //@synthesize data=_data - In the implementation block
-(id)init;
-(unsigned long long)size;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(void)writeToFile:(id)arg1 ;
@end

