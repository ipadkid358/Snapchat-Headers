/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:18 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCOnDemandGeofilterDataControllerListener.h>

@class NSString;

@interface SCOnDemandGeofilterDataControllerListenerAnnouncer : NSObject <SCOnDemandGeofilterDataControllerListener> {

	mutex _mutex;
	shared_ptr<std::__1::vector<__weak id<SCOnDemandGeofilterDataControllerListener>, std::__1::allocator<__weak id<SCOnDemandGeofilterDataControllerListener> > > >* _listeners;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dataController:(id)arg1 didUpdateCurrentEditingLineItem:(id)arg2 shouldUpdatePrice:(BOOL)arg3 ;
-(void)dataController:(id)arg1 didFetchODGUser:(id)arg2 success:(BOOL)arg3 authorizationFailure:(id)arg4 ;
-(void)dataController:(id)arg1 didFetchOfferedInventory:(id)arg2 success:(BOOL)arg3 ;
-(void)dataController:(id)arg1 didFetchMyGeofilters:(id)arg2 success:(BOOL)arg3 ;
-(void)dataController:(id)arg1 didFetchLineItem:(id)arg2 success:(BOOL)arg3 ;
-(void)dataController:(id)arg1 didFetchOnDemandGeofilterTemplates:(id)arg2 success:(BOOL)arg3 ;
-(void)dataController:(id)arg1 didFetchOnDemandGeofilterTemplates:(id)arg2 productType:(long long)arg3 success:(BOOL)arg4 ;
-(void)dataController:(id)arg1 didUploadAssetMetadata:(id)arg2 success:(BOOL)arg3 ;
-(void)dataController:(id)arg1 didFetchOffer:(id)arg2 success:(BOOL)arg3 validationErrors:(id)arg4 ;
-(void)dataController:(id)arg1 didSubmitGeofilterWithId:(id)arg2 success:(BOOL)arg3 approved:(BOOL)arg4 error:(id)arg5 ;
-(void)dataController:(id)arg1 didResubmitLineItem:(id)arg2 success:(BOOL)arg3 autoApproved:(BOOL)arg4 error:(id)arg5 ;
-(void)dataController:(id)arg1 didFetchAssetDraftList:(id)arg2 success:(BOOL)arg3 ;
-(void)dataController:(id)arg1 didFetchStylizedTextList:(id)arg2 success:(BOOL)arg3 ;
-(NSString *)description;
-(BOOL)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
@end

