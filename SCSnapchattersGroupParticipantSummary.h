/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:03 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SCSnapchattersSnapchatterBasicSummary, NSString;

@interface SCSnapchattersGroupParticipantSummary : NSObject <NSCopying> {

	SCSnapchattersSnapchatterBasicSummary* _basicSummary;
	NSString* _colorHex;
	NSString* _talkSessionUserID;
	NSString* _videoChatUserID;

}

@property (nonatomic,copy,readonly) SCSnapchattersSnapchatterBasicSummary * basicSummary;              //@synthesize basicSummary=_basicSummary - In the implementation block
@property (nonatomic,copy,readonly) NSString * colorHex;                                               //@synthesize colorHex=_colorHex - In the implementation block
@property (nonatomic,copy,readonly) NSString * talkSessionUserID;                                      //@synthesize talkSessionUserID=_talkSessionUserID - In the implementation block
@property (nonatomic,copy,readonly) NSString * videoChatUserID;                                        //@synthesize videoChatUserID=_videoChatUserID - In the implementation block
-(NSString *)colorHex;
-(SCSnapchattersSnapchatterBasicSummary *)basicSummary;
-(id)initWithBasicSummary:(id)arg1 colorHex:(id)arg2 talkSessionUserID:(id)arg3 videoChatUserID:(id)arg4 ;
-(NSString *)talkSessionUserID;
-(NSString *)videoChatUserID;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

