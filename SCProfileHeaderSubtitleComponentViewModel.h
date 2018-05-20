/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:17 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SCProfileHeaderSubtitleComponentViewModel : NSObject <NSCopying> {

	long long _type;
	NSString* _textValue;
	NSString* _iconAssetName;

}

@property (nonatomic,readonly) long long type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * textValue;                  //@synthesize textValue=_textValue - In the implementation block
@property (nonatomic,copy,readonly) NSString * iconAssetName;              //@synthesize iconAssetName=_iconAssetName - In the implementation block
-(NSString *)iconAssetName;
-(id)initWithType:(long long)arg1 textValue:(id)arg2 iconAssetName:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)textValue;
@end

