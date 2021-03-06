/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:16 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCMGLMapViewListener.h>

@class NSString;

@interface SCMGLMapViewListenerAnnouncer : NSObject <SCMGLMapViewListener> {

	mutex _mutex;
	shared_ptr<std::__1::vector<__weak id<SCMGLMapViewListener>, std::__1::allocator<__weak id<SCMGLMapViewListener> > > >* _listeners;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)mapViewRegionIsChanging:(id)arg1 ;
-(void)mapViewDidFinishRenderingFrame:(id)arg1 fullyRendered:(BOOL)arg2 ;
-(void)mapView:(id)arg1 didFinishLoadingStyle:(id)arg2 ;
-(NSString *)description;
-(void)mapView:(id)arg1 regionWillChangeAnimated:(BOOL)arg2 ;
-(void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2 ;
-(void)mapViewWillStartLoadingMap:(id)arg1 ;
-(void)mapViewDidFinishLoadingMap:(id)arg1 ;
-(void)mapViewDidFailLoadingMap:(id)arg1 withError:(id)arg2 ;
-(void)mapView:(id)arg1 didChangeUserTrackingMode:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(BOOL)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
@end

