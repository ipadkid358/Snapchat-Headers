/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:12 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, SCSearchPersonStoryThumbnail, SCSearchActionButtonViewModel, SCSearchActionModel, SCSearchPersonCircularBadgeViewModel;

@interface SCSearchPersonViewModel : NSObject <NSCopying> {

	BOOL _isPopular;
	BOOL _shouldShowSeparatorLine;
	NSString* _username;
	NSString* _userId;
	SCSearchPersonStoryThumbnail* _thumbnail;
	NSString* _displayName;
	NSString* _feediconName;
	NSString* _friendmoji;
	NSString* _bitmojiAvatarId;
	NSString* _bitmojiSelfieId;
	NSString* _stickerId;
	NSString* _suggestedReason;
	NSString* _suggestionToken;
	long long _viewStyle;
	SCSearchActionButtonViewModel* _actionButtonViewModel;
	SCSearchActionModel* _tapActionModel;
	SCSearchActionModel* _longPressActionModel;
	SCSearchActionModel* _storyThumbnailTapActionModel;
	SCSearchActionModel* _debugActionModel;
	SCSearchActionButtonViewModel* _dismissActionButtonViewModel;
	long long _viewState;
	SCSearchPersonCircularBadgeViewModel* _circularBadgeViewModel;
	long long _storyThumbnailState;

}

@property (nonatomic,copy,readonly) NSString * username;                                                        //@synthesize username=_username - In the implementation block
@property (nonatomic,copy,readonly) NSString * userId;                                                          //@synthesize userId=_userId - In the implementation block
@property (nonatomic,copy,readonly) SCSearchPersonStoryThumbnail * thumbnail;                                   //@synthesize thumbnail=_thumbnail - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;                                                     //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy,readonly) NSString * feediconName;                                                    //@synthesize feediconName=_feediconName - In the implementation block
@property (nonatomic,copy,readonly) NSString * friendmoji;                                                      //@synthesize friendmoji=_friendmoji - In the implementation block
@property (nonatomic,copy,readonly) NSString * bitmojiAvatarId;                                                 //@synthesize bitmojiAvatarId=_bitmojiAvatarId - In the implementation block
@property (nonatomic,copy,readonly) NSString * bitmojiSelfieId;                                                 //@synthesize bitmojiSelfieId=_bitmojiSelfieId - In the implementation block
@property (nonatomic,copy,readonly) NSString * stickerId;                                                       //@synthesize stickerId=_stickerId - In the implementation block
@property (nonatomic,copy,readonly) NSString * suggestedReason;                                                 //@synthesize suggestedReason=_suggestedReason - In the implementation block
@property (nonatomic,copy,readonly) NSString * suggestionToken;                                                 //@synthesize suggestionToken=_suggestionToken - In the implementation block
@property (nonatomic,readonly) BOOL isPopular;                                                                  //@synthesize isPopular=_isPopular - In the implementation block
@property (nonatomic,readonly) long long viewStyle;                                                             //@synthesize viewStyle=_viewStyle - In the implementation block
@property (nonatomic,copy,readonly) SCSearchActionButtonViewModel * actionButtonViewModel;                      //@synthesize actionButtonViewModel=_actionButtonViewModel - In the implementation block
@property (nonatomic,copy,readonly) SCSearchActionModel * tapActionModel;                                       //@synthesize tapActionModel=_tapActionModel - In the implementation block
@property (nonatomic,copy,readonly) SCSearchActionModel * longPressActionModel;                                 //@synthesize longPressActionModel=_longPressActionModel - In the implementation block
@property (nonatomic,copy,readonly) SCSearchActionModel * storyThumbnailTapActionModel;                         //@synthesize storyThumbnailTapActionModel=_storyThumbnailTapActionModel - In the implementation block
@property (nonatomic,copy,readonly) SCSearchActionModel * debugActionModel;                                     //@synthesize debugActionModel=_debugActionModel - In the implementation block
@property (nonatomic,copy,readonly) SCSearchActionButtonViewModel * dismissActionButtonViewModel;               //@synthesize dismissActionButtonViewModel=_dismissActionButtonViewModel - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowSeparatorLine;                                                    //@synthesize shouldShowSeparatorLine=_shouldShowSeparatorLine - In the implementation block
@property (nonatomic,readonly) long long viewState;                                                             //@synthesize viewState=_viewState - In the implementation block
@property (nonatomic,copy,readonly) SCSearchPersonCircularBadgeViewModel * circularBadgeViewModel;              //@synthesize circularBadgeViewModel=_circularBadgeViewModel - In the implementation block
@property (nonatomic,readonly) long long storyThumbnailState;                                                   //@synthesize storyThumbnailState=_storyThumbnailState - In the implementation block
-(NSString *)bitmojiAvatarId;
-(NSString *)bitmojiSelfieId;
-(NSString *)stickerId;
-(BOOL)isPopular;
-(NSString *)friendmoji;
-(SCSearchActionButtonViewModel *)actionButtonViewModel;
-(SCSearchActionModel *)longPressActionModel;
-(SCSearchActionModel *)debugActionModel;
-(SCSearchActionModel *)tapActionModel;
-(id)initWithUsername:(id)arg1 userId:(id)arg2 thumbnail:(id)arg3 displayName:(id)arg4 feediconName:(id)arg5 friendmoji:(id)arg6 bitmojiAvatarId:(id)arg7 bitmojiSelfieId:(id)arg8 stickerId:(id)arg9 suggestedReason:(id)arg10 suggestionToken:(id)arg11 isPopular:(BOOL)arg12 viewStyle:(long long)arg13 actionButtonViewModel:(id)arg14 tapActionModel:(id)arg15 longPressActionModel:(id)arg16 storyThumbnailTapActionModel:(id)arg17 debugActionModel:(id)arg18 dismissActionButtonViewModel:(id)arg19 shouldShowSeparatorLine:(BOOL)arg20 viewState:(long long)arg21 circularBadgeViewModel:(id)arg22 storyThumbnailState:(long long)arg23 ;
-(NSString *)feediconName;
-(NSString *)suggestedReason;
-(SCSearchActionModel *)storyThumbnailTapActionModel;
-(SCSearchActionButtonViewModel *)dismissActionButtonViewModel;
-(BOOL)shouldShowSeparatorLine;
-(SCSearchPersonCircularBadgeViewModel *)circularBadgeViewModel;
-(long long)storyThumbnailState;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(SCSearchPersonStoryThumbnail *)thumbnail;
-(long long)viewStyle;
-(NSString *)userId;
-(long long)viewState;
-(NSString *)username;
-(NSString *)suggestionToken;
@end

