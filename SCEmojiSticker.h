/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:47 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCStickerProtocol.h>

@class NSString;

@interface SCEmojiSticker : NSObject <SCStickerProtocol> {

	NSString* _emojiCode;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)stickerId;
-(id)packId;
-(id)initWithEmoji:(id)arg1 ;
-(id)toSOJUSticker;
-(id)loggingParamters;
-(id)loggingParamtersWithGeoStickerId;
-(id)shortLoggingName;
-(id)shortLoggingNameWithGeoStickerId;
-(id)stickerStateWithRelativeSize:(CGSize)arg1 center:(CGPoint)arg2 rotation:(double)arg3 scale:(double)arg4 isTracking:(BOOL)arg5 trackingTrajectory:(id)arg6 ;
-(id)initWithSOJUSticker:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)text;
@end
