/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:16 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SCXBitmojiSticker : NSObject <NSCopying> {

	BOOL _shadow;
	NSString* _nonClusteredStickerId;
	NSString* _clusteredFacingLeftStickerId;
	NSString* _clusteredFacingRightStickerId;

}

@property (nonatomic,copy,readonly) NSString * nonClusteredStickerId;                      //@synthesize nonClusteredStickerId=_nonClusteredStickerId - In the implementation block
@property (nonatomic,copy,readonly) NSString * clusteredFacingLeftStickerId;               //@synthesize clusteredFacingLeftStickerId=_clusteredFacingLeftStickerId - In the implementation block
@property (nonatomic,copy,readonly) NSString * clusteredFacingRightStickerId;              //@synthesize clusteredFacingRightStickerId=_clusteredFacingRightStickerId - In the implementation block
@property (getter=hasShadow,nonatomic,readonly) BOOL shadow;                               //@synthesize shadow=_shadow - In the implementation block
+(id)stickerFromSCMT1StickerID:(id)arg1 ;
+(id)defaultSticker;
+(id)ghostModeSticker;
-(id)initWithNonClusteredStickerId:(id)arg1 clusteredFacingLeftStickerId:(id)arg2 clusteredFacingRightStickerId:(id)arg3 shadow:(BOOL)arg4 ;
-(NSString *)nonClusteredStickerId;
-(NSString *)clusteredFacingLeftStickerId;
-(NSString *)clusteredFacingRightStickerId;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasShadow;
@end

