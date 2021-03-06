/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:08 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, SCSearchActionModel, SCSearchStoryIcon, SCSearchThumbnail, SCMedia, SCSearchStreamingMediaInfo;

@interface SCSearchVisualVerticalStoryCardViewModel : NSObject <NSCopying> {

	BOOL _isStoryModerated;
	BOOL _shouldPlayVideoImmediately;
	BOOL _enableVideoStreamingThumbnail;
	NSString* _title;
	NSString* _subtitle;
	NSString* _emoji;
	NSString* _category;
	double _timestampSecs;
	SCSearchActionModel* _longPressActionModel;
	SCSearchActionModel* _singleTapActionModel;
	NSString* _debugSubtitle;
	SCSearchActionModel* _debugActionModel;
	SCSearchStoryIcon* _icon;
	SCSearchThumbnail* _thumbnail;
	SCMedia* _videoThumbnail;
	SCSearchStreamingMediaInfo* _videoStreamingThumbnail;
	UIEdgeInsets _cardInsets;
	UIEdgeInsets _iconInsets;
	UIEdgeInsets _categoryInsets;

}

@property (nonatomic,copy,readonly) NSString * title;                                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                                               //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * emoji;                                                  //@synthesize emoji=_emoji - In the implementation block
@property (nonatomic,copy,readonly) NSString * category;                                               //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) double timestampSecs;                                                   //@synthesize timestampSecs=_timestampSecs - In the implementation block
@property (nonatomic,copy,readonly) SCSearchActionModel * longPressActionModel;                        //@synthesize longPressActionModel=_longPressActionModel - In the implementation block
@property (nonatomic,copy,readonly) SCSearchActionModel * singleTapActionModel;                        //@synthesize singleTapActionModel=_singleTapActionModel - In the implementation block
@property (nonatomic,readonly) BOOL isStoryModerated;                                                  //@synthesize isStoryModerated=_isStoryModerated - In the implementation block
@property (nonatomic,copy,readonly) NSString * debugSubtitle;                                          //@synthesize debugSubtitle=_debugSubtitle - In the implementation block
@property (nonatomic,copy,readonly) SCSearchActionModel * debugActionModel;                            //@synthesize debugActionModel=_debugActionModel - In the implementation block
@property (nonatomic,copy,readonly) SCSearchStoryIcon * icon;                                          //@synthesize icon=_icon - In the implementation block
@property (nonatomic,copy,readonly) SCSearchThumbnail * thumbnail;                                     //@synthesize thumbnail=_thumbnail - In the implementation block
@property (nonatomic,copy,readonly) SCMedia * videoThumbnail;                                          //@synthesize videoThumbnail=_videoThumbnail - In the implementation block
@property (nonatomic,copy,readonly) SCSearchStreamingMediaInfo * videoStreamingThumbnail;              //@synthesize videoStreamingThumbnail=_videoStreamingThumbnail - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets cardInsets;                                                //@synthesize cardInsets=_cardInsets - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets iconInsets;                                                //@synthesize iconInsets=_iconInsets - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets categoryInsets;                                            //@synthesize categoryInsets=_categoryInsets - In the implementation block
@property (nonatomic,readonly) BOOL shouldPlayVideoImmediately;                                        //@synthesize shouldPlayVideoImmediately=_shouldPlayVideoImmediately - In the implementation block
@property (nonatomic,readonly) BOOL enableVideoStreamingThumbnail;                                     //@synthesize enableVideoStreamingThumbnail=_enableVideoStreamingThumbnail - In the implementation block
-(SCMedia *)videoThumbnail;
-(SCSearchStreamingMediaInfo *)videoStreamingThumbnail;
-(double)timestampSecs;
-(SCSearchActionModel *)singleTapActionModel;
-(SCSearchActionModel *)longPressActionModel;
-(SCSearchActionModel *)debugActionModel;
-(BOOL)isStoryModerated;
-(NSString *)debugSubtitle;
-(BOOL)enableVideoStreamingThumbnail;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 emoji:(id)arg3 category:(id)arg4 timestampSecs:(double)arg5 longPressActionModel:(id)arg6 singleTapActionModel:(id)arg7 isStoryModerated:(BOOL)arg8 debugSubtitle:(id)arg9 debugActionModel:(id)arg10 icon:(id)arg11 thumbnail:(id)arg12 videoThumbnail:(id)arg13 videoStreamingThumbnail:(id)arg14 cardInsets:(UIEdgeInsets)arg15 iconInsets:(UIEdgeInsets)arg16 categoryInsets:(UIEdgeInsets)arg17 shouldPlayVideoImmediately:(BOOL)arg18 enableVideoStreamingThumbnail:(BOOL)arg19 ;
-(UIEdgeInsets)cardInsets;
-(UIEdgeInsets)iconInsets;
-(UIEdgeInsets)categoryInsets;
-(BOOL)shouldPlayVideoImmediately;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)emoji;
-(NSString *)category;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)subtitle;
-(SCSearchStoryIcon *)icon;
-(SCSearchThumbnail *)thumbnail;
@end

