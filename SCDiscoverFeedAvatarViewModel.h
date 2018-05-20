/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:17 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SCCheetahPublicUserIconSource, UIImage;

@interface SCDiscoverFeedAvatarViewModel : NSObject <NSCopying> {

	SCCheetahPublicUserIconSource* _publicUserIconSource;
	UIImage* _loadingImage;
	double _avatarTopPadding;
	long long _avatarContentMode;
	long long _avatarPlacementType;
	double _emojiFontSize;

}

@property (nonatomic,copy,readonly) SCCheetahPublicUserIconSource * publicUserIconSource;              //@synthesize publicUserIconSource=_publicUserIconSource - In the implementation block
@property (nonatomic,copy,readonly) UIImage * loadingImage;                                            //@synthesize loadingImage=_loadingImage - In the implementation block
@property (nonatomic,readonly) double avatarTopPadding;                                                //@synthesize avatarTopPadding=_avatarTopPadding - In the implementation block
@property (nonatomic,readonly) long long avatarContentMode;                                            //@synthesize avatarContentMode=_avatarContentMode - In the implementation block
@property (nonatomic,readonly) long long avatarPlacementType;                                          //@synthesize avatarPlacementType=_avatarPlacementType - In the implementation block
@property (nonatomic,readonly) double emojiFontSize;                                                   //@synthesize emojiFontSize=_emojiFontSize - In the implementation block
-(UIImage *)loadingImage;
-(id)initWithPublicUserIconSource:(id)arg1 loadingImage:(id)arg2 avatarTopPadding:(double)arg3 avatarContentMode:(long long)arg4 avatarPlacementType:(long long)arg5 emojiFontSize:(double)arg6 ;
-(SCCheetahPublicUserIconSource *)publicUserIconSource;
-(double)avatarTopPadding;
-(long long)avatarContentMode;
-(long long)avatarPlacementType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)emojiFontSize;
@end

