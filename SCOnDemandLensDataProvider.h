/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:38 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCLensDataProviderBase.h>
#import <Snapchat/SCOnDemandLensDataStoreListener.h>

@class SOJUUnlockablesOndemandTemplateCategory, NSString;

@interface SCOnDemandLensDataProvider : SCLensDataProviderBase <SCOnDemandLensDataStoreListener> {

	SOJUUnlockablesOndemandTemplateCategory* _templateCategory;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_storedLensesForCurrentCategory;
-(void)_setDownloadableDataForCurrentCategory:(id)arg1 ;
-(id)_downloadableDataForCurrentCategory;
-(void)updateLenses;
-(id)_keyForCurrentCategory;
-(void)onDemandLensDataStoreDidUpdate:(id)arg1 ;
-(id)initWithUserSession:(id)arg1 templateCategory:(id)arg2 ;
-(void)updateDownloadableData;
-(void)dealloc;
@end

