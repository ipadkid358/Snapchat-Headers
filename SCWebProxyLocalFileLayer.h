/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:07 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCWebProxyLayer.h>

@protocol SCWebProxyLocalFileLayerDelegate;
@interface SCWebProxyLocalFileLayer : SCWebProxyLayer {

	id<SCWebProxyLocalFileLayerDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) id<SCWebProxyLocalFileLayerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)handleStreamingProxyRequest:(id)arg1 urlProvider:(id)arg2 updateBlock:(/*^block*/id)arg3 ;
-(void)handleProxyRequest:(id)arg1 urlProvider:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithRequestHandler:(id)arg1 delegate:(id)arg2 ;
-(id<SCWebProxyLocalFileLayerDelegate>)delegate;
@end

