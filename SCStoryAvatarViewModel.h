/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:08 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SCSearchNetworkImage;

@interface SCStoryAvatarViewModel : NSObject <NSCopying> {

	BOOL _shouldShowReplayIcon;
	BOOL _isLoading;
	SCSearchNetworkImage* _networkImage;
	long long _borderStyle;

}

@property (nonatomic,copy,readonly) SCSearchNetworkImage * networkImage;              //@synthesize networkImage=_networkImage - In the implementation block
@property (nonatomic,readonly) long long borderStyle;                                 //@synthesize borderStyle=_borderStyle - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowReplayIcon;                             //@synthesize shouldShowReplayIcon=_shouldShowReplayIcon - In the implementation block
@property (nonatomic,readonly) BOOL isLoading;                                        //@synthesize isLoading=_isLoading - In the implementation block
-(SCSearchNetworkImage *)networkImage;
-(id)initWithNetworkImage:(id)arg1 borderStyle:(long long)arg2 shouldShowReplayIcon:(BOOL)arg3 isLoading:(BOOL)arg4 ;
-(BOOL)shouldShowReplayIcon;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isLoading;
-(long long)borderStyle;
@end

