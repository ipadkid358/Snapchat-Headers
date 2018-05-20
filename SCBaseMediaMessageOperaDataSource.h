/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:28 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCOperaGifProviderSCOperaImageProvider;
@class NSString, SCOperaViewModel;

@interface SCBaseMediaMessageOperaDataSource : NSObject {

	BOOL _shouldEnableZoom;
	BOOL _containsMultipleMedias;
	BOOL _needToAnimationBaseThumbnailViewWhenClosing;
	NSString* _conversationId;
	long long _messageType;
	id<SCOperaGifProvider><SCOperaImageProvider> _imageProvider;
	SCOperaViewModel* _rootViewModel;

}

@property (nonatomic,copy,readonly) NSString * conversationId;                                          //@synthesize conversationId=_conversationId - In the implementation block
@property (nonatomic,readonly) long long messageType;                                                   //@synthesize messageType=_messageType - In the implementation block
@property (nonatomic,readonly) BOOL presentingMessage; 
@property (nonatomic,readonly) BOOL shouldEnableZoom;                                                   //@synthesize shouldEnableZoom=_shouldEnableZoom - In the implementation block
@property (nonatomic,readonly) BOOL containsMultipleMedias;                                             //@synthesize containsMultipleMedias=_containsMultipleMedias - In the implementation block
@property (nonatomic,readonly) BOOL needToAnimationBaseThumbnailViewWhenClosing;                        //@synthesize needToAnimationBaseThumbnailViewWhenClosing=_needToAnimationBaseThumbnailViewWhenClosing - In the implementation block
@property (nonatomic,readonly) id<SCOperaGifProvider><SCOperaImageProvider> imageProvider;              //@synthesize imageProvider=_imageProvider - In the implementation block
@property (nonatomic,retain) SCOperaViewModel * rootViewModel;                                          //@synthesize rootViewModel=_rootViewModel - In the implementation block
-(void)updateViewModelForMedia:(id)arg1 ;
-(id)initWithMessage:(id)arg1 metadata:(id)arg2 ;
-(BOOL)presentingMessage;
-(id)messageIdForPage:(id)arg1 ;
-(id)viewModelForPageId:(id)arg1 ;
-(void)prepareMediaForPresentation:(id)arg1 ;
-(void)prefetchMediasInsideBatchedMediaMessageAfterMediaId:(id)arg1 ;
-(BOOL)shouldEnableZoom;
-(BOOL)containsMultipleMedias;
-(BOOL)needToAnimationBaseThumbnailViewWhenClosing;
-(SCOperaViewModel *)rootViewModel;
-(void)setRootViewModel:(SCOperaViewModel *)arg1 ;
-(void)setRootIndex:(unsigned long long)arg1 ;
-(NSString *)conversationId;
-(id<SCOperaGifProvider><SCOperaImageProvider>)imageProvider;
-(long long)messageType;
@end
