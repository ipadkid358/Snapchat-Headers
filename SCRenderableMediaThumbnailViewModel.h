/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:29 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCBaseMediaThumbnailViewModel.h>

@class SCChatRenderableChatMedia;

@interface SCRenderableMediaThumbnailViewModel : SCBaseMediaThumbnailViewModel {

	SCChatRenderableChatMedia* _renderableMedia;

}
-(id)trackingId;
-(BOOL)containsVideo;
-(BOOL)shouldDisplayTapToLoad;
-(id)displayedMedia;
-(void)fetchVideoOverlayWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)fetchOriginalImageToDisplayWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadMedia;
-(BOOL)shouldCropCircularMedia;
-(BOOL)mediaLoaded;
-(BOOL)representsMedia:(id)arg1 ;
-(BOOL)shouldDisplayAnimatedImages;
-(void)fetchImagesToDisplayWithCompletionHandler:(/*^block*/id)arg1 scaledToSize:(CGSize)arg2 userSession:(id)arg3 ;
-(void)fetchImageToDisplayWithCompletionHandler:(/*^block*/id)arg1 scaledToSize:(CGSize)arg2 ;
-(BOOL)shouldDisplayActivityIndicator;
-(BOOL)shouldDisplayFailedToSend;
-(BOOL)shouldDisplaySendingOverlay;
-(void)setMediaToDisplay:(id)arg1 ;
-(/*^block*/id)_fetchMediaCompletionBlockForMediaType:(long long)arg1 ;
-(BOOL)_isLagunaMediaType;
-(double)width;
-(double)height;
-(BOOL)readyForDisplay;
-(id)initWithMedia:(id)arg1 ;
-(id)mediaIdentifier;
-(id)videoURL;
-(BOOL)isCircular;
@end

