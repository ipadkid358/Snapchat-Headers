/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:03 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSArray, NSString, SCSearchThumbnail, SCMedia;

@interface SCCheetahPublicUserStory : NSObject <NSCopying, NSCoding> {

	BOOL _isPopular;
	BOOL _isOfficial;
	BOOL _isFollowed;
	BOOL _isFollowing;
	int _totalNumSnaps;
	int _brandFriendliness;
	NSArray* _snaps;
	NSString* _userId;
	SCSearchThumbnail* _imageThumbnail;
	SCSearchThumbnail* _videoFirstframeThumbnail;
	SCMedia* _videoThumbnail;
	NSString* _displayName;
	NSString* _userName;
	NSString* _emoji;
	NSString* _bitmojiAvatarId;
	double _totalDurationSecs;
	double _displayTimestampSecs;
	NSString* _bitmojiAvatarSelfieId;
	NSArray* _postSubscribeSuggestions;
	NSString* _businessId;
	NSString* _businessLogoURL;
	NSString* _businessDeepLinkURL;

}

@property (nonatomic,copy,readonly) NSArray * snaps;                                           //@synthesize snaps=_snaps - In the implementation block
@property (nonatomic,copy,readonly) NSString * userId;                                         //@synthesize userId=_userId - In the implementation block
@property (nonatomic,copy,readonly) SCSearchThumbnail * imageThumbnail;                        //@synthesize imageThumbnail=_imageThumbnail - In the implementation block
@property (nonatomic,copy,readonly) SCSearchThumbnail * videoFirstframeThumbnail;              //@synthesize videoFirstframeThumbnail=_videoFirstframeThumbnail - In the implementation block
@property (nonatomic,copy,readonly) SCMedia * videoThumbnail;                                  //@synthesize videoThumbnail=_videoThumbnail - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;                                    //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy,readonly) NSString * userName;                                       //@synthesize userName=_userName - In the implementation block
@property (nonatomic,copy,readonly) NSString * emoji;                                          //@synthesize emoji=_emoji - In the implementation block
@property (nonatomic,readonly) BOOL isPopular;                                                 //@synthesize isPopular=_isPopular - In the implementation block
@property (nonatomic,readonly) BOOL isOfficial;                                                //@synthesize isOfficial=_isOfficial - In the implementation block
@property (nonatomic,readonly) BOOL isFollowed;                                                //@synthesize isFollowed=_isFollowed - In the implementation block
@property (nonatomic,copy,readonly) NSString * bitmojiAvatarId;                                //@synthesize bitmojiAvatarId=_bitmojiAvatarId - In the implementation block
@property (nonatomic,readonly) int totalNumSnaps;                                              //@synthesize totalNumSnaps=_totalNumSnaps - In the implementation block
@property (nonatomic,readonly) double totalDurationSecs;                                       //@synthesize totalDurationSecs=_totalDurationSecs - In the implementation block
@property (nonatomic,readonly) BOOL isFollowing;                                               //@synthesize isFollowing=_isFollowing - In the implementation block
@property (nonatomic,readonly) double displayTimestampSecs;                                    //@synthesize displayTimestampSecs=_displayTimestampSecs - In the implementation block
@property (nonatomic,copy,readonly) NSString * bitmojiAvatarSelfieId;                          //@synthesize bitmojiAvatarSelfieId=_bitmojiAvatarSelfieId - In the implementation block
@property (nonatomic,copy,readonly) NSArray * postSubscribeSuggestions;                        //@synthesize postSubscribeSuggestions=_postSubscribeSuggestions - In the implementation block
@property (nonatomic,copy,readonly) NSString * businessId;                                     //@synthesize businessId=_businessId - In the implementation block
@property (nonatomic,copy,readonly) NSString * businessLogoURL;                                //@synthesize businessLogoURL=_businessLogoURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * businessDeepLinkURL;                            //@synthesize businessDeepLinkURL=_businessDeepLinkURL - In the implementation block
@property (nonatomic,readonly) int brandFriendliness;                                          //@synthesize brandFriendliness=_brandFriendliness - In the implementation block
-(NSString *)bitmojiAvatarId;
-(NSArray *)snaps;
-(NSString *)bitmojiAvatarSelfieId;
-(BOOL)isPopular;
-(BOOL)isOfficial;
-(int)brandFriendliness;
-(double)displayTimestampSecs;
-(int)totalNumSnaps;
-(id)initWithSnaps:(id)arg1 userId:(id)arg2 imageThumbnail:(id)arg3 videoFirstframeThumbnail:(id)arg4 videoThumbnail:(id)arg5 displayName:(id)arg6 userName:(id)arg7 emoji:(id)arg8 isPopular:(BOOL)arg9 isOfficial:(BOOL)arg10 isFollowed:(BOOL)arg11 bitmojiAvatarId:(id)arg12 totalNumSnaps:(int)arg13 totalDurationSecs:(double)arg14 isFollowing:(BOOL)arg15 displayTimestampSecs:(double)arg16 bitmojiAvatarSelfieId:(id)arg17 postSubscribeSuggestions:(id)arg18 businessId:(id)arg19 businessLogoURL:(id)arg20 businessDeepLinkURL:(id)arg21 brandFriendliness:(int)arg22 ;
-(SCSearchThumbnail *)imageThumbnail;
-(SCSearchThumbnail *)videoFirstframeThumbnail;
-(SCMedia *)videoThumbnail;
-(BOOL)isFollowed;
-(double)totalDurationSecs;
-(NSArray *)postSubscribeSuggestions;
-(NSString *)businessLogoURL;
-(NSString *)businessDeepLinkURL;
-(NSString *)userName;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)emoji;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(NSString *)businessId;
-(NSString *)userId;
-(BOOL)isFollowing;
@end
