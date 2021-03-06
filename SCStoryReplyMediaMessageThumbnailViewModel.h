/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:29 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCChatSingleMediaThumbnailViewModel.h>

@class NSString, SCBaseMediaThumbnailViewModel, SCStoryChromeViewModel;

@interface SCStoryReplyMediaMessageThumbnailViewModel : NSObject <SCChatSingleMediaThumbnailViewModel> {

	NSString* _subtext;
	BOOL _isSendingOrHasFailed;
	double _textHeight;
	SCBaseMediaThumbnailViewModel* _baseMediaThumbnailViewModel;
	SCStoryChromeViewModel* _storyChromeViewModel;

}

@property (nonatomic,readonly) SCBaseMediaThumbnailViewModel * baseMediaThumbnailViewModel;              //@synthesize baseMediaThumbnailViewModel=_baseMediaThumbnailViewModel - In the implementation block
@property (nonatomic,readonly) SCStoryChromeViewModel * storyChromeViewModel;                            //@synthesize storyChromeViewModel=_storyChromeViewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)backgroundColorForChatLabel;
+(double)cornerRadius;
-(BOOL)containsVideo;
-(id)fontForChatLabel;
-(BOOL)shouldDisplayTapToLoad;
-(SCBaseMediaThumbnailViewModel *)baseMediaThumbnailViewModel;
-(id)colorForChatLabel;
-(SCStoryChromeViewModel *)storyChromeViewModel;
-(id)initWithStoryReplyMessage:(id)arg1 ;
-(id)initWithChatMediaContent:(id)arg1 isSendingOrHasFailed:(BOOL)arg2 subtext:(id)arg3 shouldCropCircularMedia:(BOOL)arg4 useDisplayedMediaDirectly:(BOOL)arg5 ;
-(double)_textBoxHeightForWidth:(double)arg1 ;
-(id)attributedText;
-(CGSize)thumbnailSize;
@end

